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
int* transf_i_p (int *vet, int n);
void transf_i_p_v (int *vet, int n){
    int *vet_pr=(int*) malloc(sizeof(int));
    int *vet_im=(int*) malloc(sizeof(int));
    int par=1,imp=1;
    for(int i=0;i<n;i++){
        if((vet[i]%2)==0){
            vet_pr=realloc(vet_pr,(sizeof(int)*par));
            vet_pr[par]=vet[i];
            par++;
        }
        else
        {
            vet_im=realloc(vet_im,(sizeof(int)*imp));
            vet_pr[imp]=vet[i];
            imp++;
        }
        
    }
    
}

int main(void){
    int n,d;
    scanf("%d",&n);
    printf("fill vetor\n");
    int * vet = (int *) malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&d);
    }
    transf_i_p_v(vet,n);

    free(vet);
    return 0;
}