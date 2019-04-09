#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void boa_senha(char * str){
    int size=strlen(str);
    int f1=0,f2=0,f3=0,f4=0,f5=0;
    if(size<8) printf("less than 8 digits \n");
    else{
        f1=1;
        for(int i=0;i<size;i++){
            if(str[i]>=48 && str[i]<=57) f2=1;
            else{
                if(str[i]>=65 && str[i]<=90) f3=1;
                else{
                    if(str[i]>=97 && str[i]<=122) f4=1;
                    else{
                        if(str[i]>=32 && str[i]<=127) f5=1;
                    }
                }
            }

        }
        printf("%d %d %d %d %d\n",f1,f2,f3,f4,f5);
        if((f1+f2+f3+f4+f5)==5) printf("BOA senha\n");
        else printf("BAD senha\n");

    }
    
}


int main(void){

    char* cadena=(char *) malloc(sizeof(char)*50);
    scanf("%s",cadena);
    boa_senha(cadena);
    free(cadena);
    return 0;
}
