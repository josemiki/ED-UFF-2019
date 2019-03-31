#include <stdio.h>
void primos_peneira(int n,int *vet_n,int *vet_p){
    int i;
    for(i=0;i<n;i++){
        vet_n[i]=i+1;
        vet_p[i]=1;
    }
    for(i=1;i<n;i++){
        if(vet_p[i]!=0){
            int j=i+1;
            int m=j*vet_n[i];
            while(m<n){
                m=j*vet_n[i];
                vet_p[m-1]=0;
                j++;
            }
        }
    }

    for(i=1;i<n;i++){
        if(vet_p[i]!=0){
            printf(" %d ",vet_n[i]);
        }
    }
    printf("\n");
}

int main(void){
    int n ;
    
    printf("Insert number: ");
    scanf("%d",&n);
    int vet_n[n];
    int vet_p[n];
    primos_peneira(n,vet_n,vet_p);
    return 0;
}
