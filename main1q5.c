#include<stdio.h>
void gen_bin(int n, int* vet)
{
    int i=0;
    while(n>=1){
       // printf("last n:%d \n ",n);
        vet[i]=(n%2);
        n=(n/2);    
        i++;
    }
    
    //printf("las i:%d ",i);
    for(int j=(i-1);j>=0;j--)//int j=i;j>=0;j--)
    {
        printf(" %d ",vet[j]);
    }
    printf("\n");
}
int main(void){
    int n;
    
    int vet[n];
    int i=0;
    //scanf("%d",&n);
    while(1){
        printf("input number: \n");
        scanf("%d",&n);
        if(n>0){
            gen_bin(n,vet);
        } 
        else break;
    }
    return 0;
}