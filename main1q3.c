#include<stdio.h>
#include<math.h>

int mypow(int x ,int y)
{
    if(y==0) return 1;

    int res=x;

    for(int i=2;i<=y;i++)
    {
        res=res*x;
    }
    return res;
}
int main(void)
{
    int n,m;
    while(1){
        printf("insert n:\n");
        scanf("%d",&n);
        printf("insert m:\n");
        scanf("%d",&m);
        if(n<1||m==0||m==1||m==-1) break;

        int i=0,p;
        do{
            p=mypow(m,i);
            if(p<n)
                printf(" %d ",p);
            i++;
        }while(p<n);
        printf("\n");
    }
    return 0;
}