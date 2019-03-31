#include<stdio.h>

int main(void)
{
    int x,y,z;
    int teste;
    x=5;
    y = x++;
    z = x--;
    printf("Print x,y,z: %d , %d , %d \n",x,y,z);
    teste = !y == !x;

    //printf(" %d \n",1>0);

    printf("(a) teste = !y == !x: \n");
    printf(" %d \n",teste);

    teste = ((x++ > y) || (--z <= y));
    printf("(b) teste = ((x++ > y) || (--z <= y)): \n");
    printf(" %d \n",teste);

    teste = ((!x) || (!(!z)));
    printf("(c) teste = ((!x) || (!(!z))): \n");
    printf(" %d \n",teste);

    teste = (((x + y) > z) && (x++));   
    printf("(d) teste = (((x + y) > z) && (x++)): \n");
    printf(" %d \n",teste);

    teste = x && y + !3 || 4;
    printf("(e) teste = x && y + !3 || 4;: \n");
    printf(" %d \n",teste);
    return 0;
}