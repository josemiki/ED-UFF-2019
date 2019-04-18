#include<stdio.h>
//#include<stdio.h>
#include<stdlib.h>

int** mult (int m1, int n1, int **mat1, int m2, int n2, int **mat2){
    printf("m1: %d %d %p\n",m1,n1,mat1);
    printf("m2: %d %d %p\n",m2,n2,mat2);

    int ** matrixr=(int **) malloc(sizeof(int*)*m1);
    printf("double pointer created");

    for(int i=0;i<m1;i++)
        matrixr[i]=(int *) malloc(sizeof(int)*n2);
    printf("mat created");
    int r=0;  
    for(int f=0;f<m1;f++){
        for(int c=0;c<n2;c++){
            printf("f,c %d %d",f,c);
            for(int i=0;i<n1;i++){
                //printf("f,j,i %d %d %d",f,c,i);
                r=r+(mat1[f][i]*mat2[i][c]);
            }
            matrixr[f][c]=r;
            r=0;
        }
    }
    
    return matrixr;
}
int main(void){

    int m1=2,n1=3;
    int m2=3,n2=4;

    int ** matrix1=(int **) malloc(sizeof(int*)*m1);
    for(int i=0;i<m1;i++)
        matrix1[i]=(int *) malloc(sizeof(int)*n1);
    
    int ** matrix2=(int **) malloc(sizeof(int*)*m2);
    for(int i=0;i<m2;i++)
        matrix2[i]=(int *) malloc(sizeof(int)*n2);
    printf("matrix allocated\n");

    matrix1[0][0]=2;
    matrix1[0][1]=1;
    matrix1[0][2]=4;

    matrix1[1][0]=0;
    matrix1[1][1]=1;
    matrix1[1][2]=1;

    matrix2[0][0]=6;
    matrix2[0][1]=3;
    matrix2[0][2]=-1;
    matrix2[0][3]=0;

    matrix2[1][0]=1;
    matrix2[1][1]=1;
    matrix2[1][2]=0;
    matrix2[1][3]=4;
    
    matrix2[2][0]=-2;
    matrix2[2][1]=5;
    matrix2[2][2]=0;
    matrix2[2][3]=2;

    printf("m1: %d %d %p\n",m1,n1,matrix1);
    printf("m2: %d %d %p\n",m2,n2,matrix2);

    printf("matrix filled\n");

    int **matrixr=mult(m1,n1,matrix1,m2,n2,matrix2);

    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;i++)
            printf("%d ",matrixr[i][j]);
        printf("\n");
    }
    for(int i=0;i<m1;i++)
        free(matrix1[i]);
    free(matrix1);
    for(int i=0;i<m2;i++)
        free(matrix2[i]);
    free(matrix2);

    return 0;
}