#include<stdio.h>

int isPrime(int n){ 
    if (n <= 1) 
        return 0; 

    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return 0; 
  
    return 1; 
} 

void printPrime(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            printf(" %d ",i);
    }
    printf("\n"); 
} 
int main(void)
{
    int n;
    while(1){

        printf("please insert number: \n");
        scanf("%d",&n);
        if(n>0){
             printPrime(n);
        }
        else
        {
            break;
        }
        

    }

    return 0;
}