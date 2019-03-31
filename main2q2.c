#include<stdio.h>
void integral(int g, int *coef){
    
    float vec_i[g+1];
    vec_i[0]=0;
    for(int i=1;i<=g+1;i++){

        //printf(" coef: %d  i: %d \n",coef[i-1],i);
        vec_i[i]=(float)(coef[i-1]/(float)i);
    }
    printf("Integral: \n");
    for(int i=0;i<=g+1;i++){
        printf(" %.2f ",vec_i[i]);
    }
    printf("\n");

}
void derivada(int g, int *coef){
    int vec_i[g];
    //vec_i[0]=0;
    for(int i=1;i<=g;i++){

        //printf(" coef: %d  i: %d \n",coef[i-1],i);
        vec_i[i-1]=(coef[i]*i);
    }
    printf("Derivada: \n");
    for(int i=0;i<g;i++){
        printf(" %d ",vec_i[i]);
    }
    printf("\n");
}
int main(void){
    while(1){
        
        int g,n;
        printf("Insert grade: ");
        scanf("%d",&g);
        if(g>0){
            int size_v=g+1;
            int vet_coef[size_v];
            printf("Insert list of coeficients: ");
            for(int i=0;i<size_v;i++){
                scanf("%d",&n);
                vet_coef[i]=n;
            }
            integral(g,vet_coef);
            derivada(g,vet_coef);
        }
        else break;
    }
}
