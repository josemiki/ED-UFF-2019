#include<stdio.h>
#include<stdlib.h>
void clean(int *f,int *c){

    for(int i=0;i<9;i++){
        f[i]=c[i]=-1;
    }

}
int check_sudoku(int ** matrix){
    int vf[9],vc[9],f[9],c[9];
    //clean(vf,vc);
    clean(f,c);
    int fx=0,fy=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            f[(matrix[i][j])-1]=f[(matrix[i][j])-1]+1;

            c[(matrix[j][i])-1]=c[(matrix[j][i])-1]+1;
        }
        for(int l=0;l<9;l++){
            //printf("f: %d c: %d\n",f[l],c[l]);
            if(f[l]>=0 && c[l]>=0)
            {    
                fx=fx+f[l];
                fy=fy+c[l];
            }
        }
        //printf("fx: %d fy: %d\n",fx,fy);
        vf[i]=fx;
        vc[i]=fy;
        fx=fy=0;
        clean(f,c);
    }
    int rx=0,ry=0;
    for(int i=0;i<9;i++){
        rx=rx+vf[i];
        ry=ry+vc[i];
    }
    if(rx==0&&ry==0) return 0;
    else return 1;

    /*int ** f=(int **) malloc(sizeof(int*)*9);
    for(int i=0;i<9;i++)
        f[i]=(int *) malloc(sizeof(int)*9);

    int ** c=(int **) malloc(sizeof(int*)*9);
    for(int i=0;i<9;i++)
        c[i]=(int *) malloc(sizeof(int)*9);
    

    for(int i=0;i<9;i++){
        free(c[i]);
        free(f[i]);
    }
    free(f);
    free(c);
    */
}
int main(void){
    int ** matrix=(int **) malloc(sizeof(int*)*9);
    for(int i=0;i<9;i++)
        matrix[i]=(int *) malloc(sizeof(int)*9);
    
    FILE *fs;
	char ch;
	int num;
	fs = fopen("sudoku.txt", "r");
	

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            
            ch = fgetc(fs);
	        num = atoi(&ch);
            //printf("%d",num);
            //printf("%d %d :%d ",i,j,num);
            if(num!=0){
                //printf("%d %d :%d ",i,j,num);
                matrix[i][j]=num;
            }
        }
        ch = fgetc(fs);
        //printf("\n");
    }
/*
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
*/
    int s=check_sudoku(matrix);
    if(s==0) printf("correcto\n");
    else printf("NO correcto\n");
    for(int i=0;i<9;i++)
        free(matrix[i]);
    free(matrix);
    return 0;
}