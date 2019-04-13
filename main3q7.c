#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void major_substring(char *c1,char *c2){
    int l1,l2,s=0,ini,fin;
    l1=strlen(c1);
    l2=strlen(c2);
    printf("size l1 ,l2: %d , %d \n",l1,l2);
    int i,j,max=0,k,l;

    int matrix [l1+1][l2+1];

    for(j=0;j<l2+1;j++)
        matrix[0][j]=0;
    for(j=0;j<l1+1;j++)
        matrix[j][0]=0;

    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            //printf("i %d,j %d,c1 %c,c2 %c\n",i,j,c1[i],c2[j]);
            if(c1[i]==c2[j]){
                //printf("i %d,j %d,c1 %c,c2 %c\n",i,j,c1[i],c2[j]);
                matrix[i+1][j+1]=matrix[i][j]+1;
                if(max<matrix[i+1][j+1]){
                    max=matrix[i+1][j+1];
                    k=i+1;
                    l=j+1;
                }
            }
            else matrix[i+1][j+1]=0;
        }
    }
    for(i=0;i<l1+1;i++){
        for(j=0;j<l2+1;j++){
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("maximo k-i,l-j,m: %d , %d , %d \n",k,l,max);
    int x=k-max;
    for(;x<k;x++)
    {
        printf("%c",c1[x]);
    }
    printf("\n");

}

int main(void){
    char c1[30]="qwertnssssdfgh";//"ACCTGAACTCCCCCC";
    char c2[30]="qwnssssdhhh";//"ACCTAGGACCCCCC";
    major_substring(c1,c2);
    return 0;
}