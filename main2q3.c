#include<stdio.h>
#include<stdlib.h>

int cmp_int(const void * p1,const void * p2){
    int *v1=(int *)p1,*v2=(int *)p2;
    if((*v1)<(*v2)) return -1;
    if((*v1)>(*v2)) return 1;
    return 0;
}
void permut(int a,int b){
    int * vet_a,* vet_b;
    vet_a=(int *) malloc(sizeof(int));
    vet_b=(int *) malloc(sizeof(int));
    if(vet_a==NULL||vet_b==NULL) exit(1);
    int i=0,s;
    s=1;
    while(a!=0 || b!=0){
        vet_a[i]=a%10;
        vet_b[i]=b%10;
        s++;
        vet_a=realloc(vet_a,s*sizeof(int));
        vet_b=realloc(vet_b,s*sizeof(int));
        a=a/10;
        b=b/10;
        i++;
        
    }
    /*
    printf("size vet_a_b: %d \n",s);

    for(int i=0;i<s-1;i++){
        printf(" %d %d \n",vet_a[i],vet_b[i]);
    }*/

    qsort(vet_a,s,sizeof(int),cmp_int);
    qsort(vet_b,s,sizeof(int),cmp_int);

    /*for(int i=0;i<s-1;i++){
        printf(" %d %d \n",vet_a[i],vet_b[i]);
    } */

    int r=0;
    for(int i=0;i<s-1;i++){
        r+=(vet_a[i]-vet_b[i]);
    }
    if(r==0) printf(" e permutacao\n");
    else printf(" nao e permutacao\n");
    free(vet_a);
    free(vet_b);
}
int main(void)
{
    while(1)
    {
        printf("ingrese numeros a y b: \n");
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>0&&b>0){
            permut(a,b);
        }
        else break;
    }
}