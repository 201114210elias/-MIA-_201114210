
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

void prueba(char input3[100], char input4[100], int c){

char pp[100];
        if(c==0){
           if(strcasecmp(input3,"mkdisk")==0){
             printf("mkdisk \n");
            strcpy(pp,input3);

           }

           }

        if(c>0){
           //printf("%s\n",pp);

            if(strcasecmp(input3,"-size")==0){
                printf("%s %s \n", input3 , input4);
            }


           }


}
void mkdisk(){

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
