#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char* str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
        
}
void retira_fin_n (char * str, int n){
    int i=0;//,c=0;
    int c=mystrlen(str);
    if(c<n){
            printf("erro");
        }
    else{
        for(i=(c-n);i<c;i++){
        //if(i<n){
                str[i]='\0';
        //}
        //else break;
        }
    //printf("%d",i);
    
    //i=i-1;
        i=0;
        while(str[i]!='\0'){
            printf("%c",str[i]);
            i++;
        }
    }
    
}

int main(void)
{
    int n;
    char * cad= (char *) malloc(sizeof(char)*50);

    scanf("%s",cad);
    scanf("%d",&n);
    
    retira_fin_n(cad,n);

    free(cad);

    return 0;
}