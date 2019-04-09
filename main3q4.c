#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void retira_inicio_n (char * str, int n){
    int i=0;//,c=0;

    while(str[i]!='\0'){
        if(i<n){
            str[i]='\0';
        }
        else break;
        i++;
    }
    //printf("%d",i);
    if(i<n){
            printf("erro");
        }
    //i=i-1;

    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
}

int main(void)
{
    int n;
    char * cad= (char *) malloc(sizeof(char)*50);

    scanf("%s",cad);
    scanf("%d",&n);
    
    retira_inicio_n(cad,n);

    free(cad);

    return 0;
}