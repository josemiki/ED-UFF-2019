#include<stdio.h>

int main(void)
{
    
    int n,max,prev,curr;
    while(1){
        printf("Size: ");
        scanf("%d",&n);
        
        max=0;
        if(n>=1){
            printf("Size of list: %d\n",n);
           
            scanf("%d",&prev);
            for(int i=1;i<n;i++){
                scanf("%d",&curr);
                if(prev<curr) max++;
            }
            printf("Segmento crescente maximo: %d\n",max);
        }
        else
        {
            break;
        }
        
       
    }
    
    
    return 0;
}
