
#include <stdio.h>

#include<string.h>
#include<stdio.h>

#define _LINUX //comenta esta linea si no usas linux o mac

#ifdef _LINUX
#define LIMPIA "clear"
#else
#define LIMPIA "cls"
#endif

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
           //printf("Primera parte %s\n", p);


                le[a]=p;

                cont++;

            }

            p = strtok(NULL, " ");
}
        while (cont!=0){
        //printf("CodinoInicial: %s\n",le[cont-1]);
        encontrar2(le[cont-1]);
        cont--;
        }
        //ya vamos!

}

void encontrar2(char input2[100]){



    //printf("%s\n",input2);
    int cont2=0;
    char *p2;
    char *le2[20];
    p2 = strtok(input2, "::");
                for (int a=0; a<strlen(input2); a++){
                    if(p2)
                    {
                      // printf("codigo: %s\n", p2);
                        le2[a]= p2;
                        cont2 ++;
                        printf("%d\n",cont2);
                    }
                    p2 = strtok(NULL, "::");
                    }

        if (strcmp(le2[cont2-1],"mkdisk")==0){
        printf("encontro mkdisk\n");
        printf("%d\n",cont2);
            while (cont2!=0){
            //sisepuedoperoalreveznoseporque
            //printf("%s\n",le[cont-1]);
            printf("Codigo %s\n",le2[cont2-1]);


                cont2--;
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
    encontrar_palabra(codigo);
    printf("\n");
} while(strcmp(codigo,"salir"));


return 0;
}
