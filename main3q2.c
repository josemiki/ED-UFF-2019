#include<stdio.h>
#include<stdlib.h>
void copia_rec(char *d, char *o)
{
    d[0]=o[0];
    if(o[0]) copia_rec(&d[1],&o[1]);
}
char * codifica (char *strdin){
    char * strdout = (char *) malloc(sizeof(char)*50);
    copia_rec(strdout,strdin);
    int i=0;
    while(strdout[i]!='\0'){
        if(97<=strdout[i]&&strdout[i]<=122) strdout[i]='?';
        i++;
    }
    return strdout;
}

int main(void){
    char * strdin = (char *) malloc(sizeof(char)*50);
    scanf("%s",strdin);
    //printf("%s\n",strdin);
    char * out=codifica(strdin);
    
    printf("%s\n",out);
    free(strdin);
    free(out);
    return 0;
}