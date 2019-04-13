#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int igual (char *str1, char *str2){
    int l1,l2,r=0;
    l1=strlen(str1);
    l2=strlen(str2);
    
    if(l1!=l2) return (r+1);
    else{
        for(int i=0;i<l1;i++){
            if(str1[i]==str2[i]){
                r=r+0;
            }
        }
        return r;
    }

}
int main(void){
    char * str1=(char *) malloc(sizeof(char)*59);
    char * str2=(char *) malloc(sizeof(char)*59);
    scanf("%s",str1);
    scanf("%s",str2);
    int r = igual(str1,str2);
    if(r==0) printf("iguaes\n");
    else printf("NO iguaes\n");
    free(str1);
    free(str2);
    return 0;
}
