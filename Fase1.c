
#include <stdio.h>

#include<string.h>
#include<stdio.h>

#define _LINUX //comenta esta linea si no usas linux o mac

#ifdef _LINUX
#define LIMPIA "clear"
#else
#define LIMPIA "cls"
#endif
int ayuda=0;
void encontrar_palabra(char input[100]){
    input[strlen(input)-1]='\0';
    //printf("%s",input);
    char *le[20];
    char *p;
    int cont=0;
    p = strtok(input, " ");
        for (int a; a<strlen(input); a++){
            if(p)
            {



                le[cont]=p;

                cont++;

            }
            //printf("Primera parte %s\n", p);
            p = strtok(NULL, " ");
}
        while (ayuda <cont){
        //printf("Primera parte %s\n", le[ayuda]);
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



    //printf("%s\n",input2);

    char *p2;
    int resi;
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
            //printf("c %s %s\n", le2[c2], le2[c2+1]);
            prueba(le2[c2], le2[c2+1],c2);
            }


            }

            c2++;

            }



}


char nomb[100];

void prueba(char input3[100], char input4[100], int c){
 int tamal;
char pp[100];
char siz[100];
char siz2[100];
char unit[100];
char unit2[100];
char path[100];
char path2[200];
char namee[100];
char namee2[100];

        if(c==0){
           if(strcasecmp(input3,"mkdisk")==0){
             printf("mkdisk \n");
            strcpy(pp,input3);

           }

           }

        if(c>0){
           //printf("%s\n",pp);

            if(strcasecmp(input3,"-size")==0){

                strcpy(siz,input3);
                strcpy(siz2,input4);

                sscanf(siz2,"%d",&tamal);
                printf("%s %d \n", siz , tamal);
            }

            if(strcasecmp(input3,"+unit")==0){

                strcpy(unit,input3);
                strcpy(unit2,input4);
                printf("%s %s \n", unit , unit2);
            }

            if(strcasecmp(input3,"-path")==0){

                strcpy(path,input3);
                strcpy(path2,input4);


                printf("%s %s \n", path , path2);
            }
            if(strcasecmp(input3,"-name")==0){

                strcpy(namee,input3);
                strcpy(namee2,input4);
                    char *na;

                    na = strtok(namee2, "\"");
                    for (int a1; a1<strlen(namee2); a1++){
                        if(na)
                        {
                            //printf("%s\n", p);
                            strcpy(nomb,na);
                        }

                        na = strtok(NULL, "\"");
                    }

                printf("%s %s \n", namee , nomb);
            }
            if((strcasecmp(pp,"mkdisk")==0)&&(strcasecmp(siz,"-size")==0)&&(strcasecmp(path,"-path")==0)&&(strcasecmp(namee,"-name")==0)){

                mkdisk(path2,nomb);
           }


           }



}
void mkdisk(char primero[100], char segundo[100]){
//printf("%s %s", primero , segundo);
            char dire[201];
                    char *na2;

                    na2 = strtok(primero, "\"");
                    for (int a1; a1<strlen(primero); a1++){
                        if(na2)
                        {
                            //printf("%s\n", p);
                            strcpy(dire,na2);
                        }

                        na2 = strtok(NULL, "\"");
                    }

            strcat(dire,segundo);
            printf("direccion: %s \n", dire);
            //FILE *archivo = fopen(\

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
    encontrar_palabra(codigo);
    printf("\n");
} while(strcmp(codigo,"salir"));


return 0;
}
