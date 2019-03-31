#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp_int(const void * p1,const void * p2){
    int *v1=(int *)p1,*v2=(int *)p2;
    if((*v1)<(*v2)) return -1;
    if((*v1)>(*v2)) return 1;
    return 0;
}
int int_pow(int base, int exp)
{
    int result = 1;
    while (exp)
    {
        if (exp & 1)
           result *= base;
        exp /= 2;
        base *= base;
    }
    return result;
}
void palidromo(int n){
    int bn=n;

    int * vet_a;
    vet_a=(int *) malloc(sizeof(int));
    //vet_b=(int *) malloc(sizeof(int));
    //if(vet_a==NULL) exit(1);
    int i=0,s;
    s=1;
    while(n>0){
        vet_a=realloc(vet_a,s*sizeof(int));
        vet_a[i]=n%10;
        //vet_b[i]=n%10;
        s++;
        
        //vet_b=realloc(vet_b,s*sizeof(int));
        n=n/10;
        //b=b/10;
        i++;
        
    }

    printf("size_s: %d \n",s);
    
    for(int i=0;i<s-1;i++){
        printf(" %d \n",vet_a[i]);
    }

    int r=0;
    for(int i=0;i<s-1;i++){
        r+=(vet_a[i]*(int_pow(10,s-2-i)));
    }
    printf("r: %d \n",r);

    if((bn-r)==0) printf("e palindromo\n");
    else printf("nao e palindromo\n");
    free(vet_a);

}
int main(void)
{
    while(1)
    {
        printf("ingrese numero: \n");
        int n;
        scanf("%d",&n);
        
        if(n>0){
            palidromo(n);
        }
        else break;
    }
}