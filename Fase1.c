
#include <stdio.h>

#include<string.h>
#include<stdio.h>


#define _LINUX //comenta esta linea si no usas linux o mac

#ifdef _LINUX
#define LIMPIA "clear"
#else
#define LIMPIA "cls"
#endif

char a2[100];
int momento=0;
int kk2;

void cambiar(char a1[100]){


int kk= 0;
    for ( int i=0;i<strlen(a1);i++ ){

        if ( a1[i] == '-' ){

            a2[kk] = '+';


        }else{

            a2[kk] = a1[i];


        }
        kk++;

    }
    kk2= kk;

 //printf("\nCambiado es : %s\n",a2);
 /*while (momento < kk2){
  a2[momento]='\0';
  momento ++;

  }*/

 encontrar_palabra(a2);
}

int ayuda=0;


void encontrar_palabra(char input[100]){

    input[strlen(input)-1]='\0';
    printf("ddd %s\n",input);
    char *le[20];
    char *p;
    int cont=0;
    printf("P %d %d\n",ayuda, cont);
    p = strtok(input, "+");
        for (int a; a<strlen(input); a++){
            if(p)
            {



                le[cont]=p;

                cont++;

            }
            //printf("Primera parte %s\n", p);
            p = strtok(NULL, "+");
}
        while (ayuda <cont){
        printf("Primera parte %s\n", le[ayuda]);
        encontrar2(le[ayuda]);
        ayuda ++;
        }
        //ya vamos!

}
    int c4=0;
    int cont2=0;

    int c2=0;
    int c3=0;
     char *le2[20];
    char *temp[20];
    char *temp2[20];


void encontrar2(char input2[100]){


int resi;
   //printf("%s\n",input2);

    char *p2;

    p2 = strtok(input2, "::");
                for (int a=0; a<strlen(input2); a++){
                    if(p2)
                    {

                        le2[cont2]= p2;
                        cont2 ++;

                    }
                     //printf("codigo: %s %d\n", p2 , cont2);
                    p2 = strtok(NULL, "::");
                    }
            while (c2 < cont2){
            if(c2==0){

            //printf(" %s \n", le2[c2]);
            prueba(le2[c2], le2[c2+1], c2);

            }else{

            int pepe= c2 + 1;
            temp2[c3]=le2[pepe];
            resi = c2%2;
            //printf("residuo %d\n", resi);
            if(resi==1){
            //printf(" %s %s\n", le2[c2], le2[c2+1]);
            prueba(le2[c2], le2[c2+1],c2);
            }


            }

            c2++;

            }



}


char nomb[100];


char pp[100];
char elimi[100];
char siz[100];
char siz2[100];
char unit[100];
char unit2[100];
char path[100];
char path2[200];
char namee[100];
char namee2[100];
int tamal;

void prueba(char input3[100], char input4[100], int c){

        //printf("prueba: %s%s%d\n", input3,input4,c);


        if(c==0){
            input3[strlen(input3)-1]='\0';
           if(strcasecmp(input3,"mkdisk")==0){
             printf("mkdisk \n");
            strcpy(pp,input3);

           }
           if(strcasecmp(input3,"rmdisk")==0){
             printf("rmdisk \n");
            strcpy(elimi,input3);

           }
           }

        if(c>0){
           //printf("%s\n",pp);

            if(strcasecmp(input3,"size")==0){

                strcpy(siz,input3);
                strcpy(siz2,input4);

                tamal= atoi(siz2);
                printf("%s %d \n", siz , tamal);
            }

            if(strcasecmp(input3,"unit")==0){

                strcpy(unit,input3);
                strcpy(unit2,input4);
                printf("%s%s \n", unit , unit2);
            }

            if(strcasecmp(input3,"path")==0){

                strcpy(path,input3);

                strcpy(path2,input4);


                printf("%s%s \n", path , path2);
            }
            if(strcasecmp(input3,"name")==0){

                strcpy(namee,input3);
                strcpy(namee2,input4);


                //printf("oh oh %s %s \n", namee,namee2);


                printf("%s%s \n",namee, namee2);
            }
            if((strcasecmp(pp,"mkdisk")==0)&&(strcasecmp(siz,"size")==0)&&(strcasecmp(path,"path")==0)&&(strcasecmp(namee,"name")==0)){

                mkdisk(path2,namee2,tamal,unit2);
               // printf("juntos primero %s %s \n", path2 , namee2);
           }


           }



}

struct estructura{
    int id;
};
void mkdisk(char primero[100], char segundo[100],int size, char unidad[20]){
        //printf("juntos?? %s %s \n", primero , segundo);
        //printf("%d",size);


                    char *dire[201];
                    char *na2;

                    na2 = strtok(primero, "\"");
                    for (int a1; a1<strlen(primero); a1++){
                        if(na2)
                        {
                           // printf("%s\n", na2);
                            dire[a1]=na2;
                        }

                        na2 = strtok(NULL, "\"");
                    }

                    char *dire2[201];
                    char *na23;

                    na23 = strtok(segundo, "\"");
                    for (int a12; a12<strlen(segundo); a12++){
                        if(na23)
                        {
                           // printf("%s\n", na2);
                            dire2[a12]=na23;
                        }

                        na23 = strtok(NULL, "\"");
                    }

                   //printf("%s %s\n", dire[0], dire2[0]);
                   char d1[200];
                   char d2[100];
                   strcpy(d1,dire[0]);
                   strcpy(d2,dire2[0]);
                   strcat(d1,d2);
                   //printf("direccion: %s \n", d1);
                   crear_disco(dire[0],d1,size,unidad);




}
int contador;
int sali=0;
void crear_disco(char path3[200], char Direccion[200],int size2, char unid[20]){
contador ++;
if (contador ==2){
printf("\nDireccion Completa%s \n", Direccion);



long tam;

if (size2 >0){
    //printf("El Tamano es mayor \n");
        if(strcasecmp(path3,"")!=0){
            if(strcasecmp(Direccion,"")!=0){
                char bufferCarpeta[200];
                snprintf(bufferCarpeta,sizeof(bufferCarpeta),"mkdir -p \"%s\"", path3);
                //snprintf(bufferCarpeta,sizeof(bufferCarpeta),"rm %s", path3);
                system(bufferCarpeta);
                //printf("Se creo Carpeta\n");

                if(strcasecmp(unid,"m")==0){

                tam= 1024 *1024*size2;
                printf("tamaño %lu\n", tam);

                }
                if(strcasecmp(unid,"")==0){

                tam= 1024 *1024*size2;
                printf("tamaño %lu\n", tam);

                }
                if(strcasecmp(unid,"k")==0){
                tam=1024*size2;
                printf("tamaño %lu\n", tam);
                }
                char bufferArchivo[100];
                snprintf(bufferArchivo,sizeof(bufferArchivo),"dd if=/dev/zero of=%s bs=1 count=%lu", Direccion,tam);
                system(bufferArchivo);
                printf("Se creo Archivo\n");

                }
            }
        }


            while(sali < cont2){
            le2[sali]='\0';


            temp[sali]='\0';
            temp2[sali]='\0';
             path[sali]='\0';
             path2[sali]='\0';
            //printf(" cantidad %d %s %s %s \n",sali, le2[sali],a2);
            sali ++;
            }
        ayuda=0;
        cont2=0;


 while (momento < kk2){
  a2[momento]='\0';
  momento ++;

  }





}


}


int main() {

char codigo[100];


printf("Universidad de San Carlos de Guatemala\n");
printf("Abraham Enrique Jr. Elias Elias\n");
printf("2011 14210    -MIA- \n");

do{
    printf("-> ");
    fflush(stdin);
    fgets(codigo,100,stdin);
    //cambiar(codigo);
    abrirarchivo(codigo);
    //encontrar_palabra(codigo);
    printf("\n");
} while(strcmp(codigo,"salir"));


return 0;
}


void abrirarchivo(char Path[100]){

    //printf("%s\n", Path);
     Path[strlen(Path)-1]='\0';
     //printf("%s\n", Path);
   char Linea[200];
     FILE *Archivo;
     int FinArchivo=0;

     Archivo = fopen(Path,"r");
     if(Archivo==NULL)
     {
         printf(">>>> ERROR: ruta de fichero no encontrada <<<<\n");
         return;

     }else
     {


        FinArchivo =  fscanf(Archivo," %[^\n]",&Linea);

        printf("------------->> Comando ingresado << ------------\n");
        while(FinArchivo != EOF )
        {


            printf("%s\n",Linea);
            cambiar(Linea);
            FinArchivo = fscanf(Archivo," %[^\n]",&Linea);



        }


     }
     fclose(Archivo);




}

