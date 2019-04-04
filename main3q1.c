#include<stdio.h>
void shift_troca_string (char *str){
    int i =0;
    while(str[i]!='\0'){
        if(str[i]=='A'){
            str[i]=str[i]+25+32;
        }
        else{
            if('A'<str[i]&&str[i]<='Z'){
                str[i]=str[i]+32-1;
            }
            else{
                if(str[i]=='a'){
                    str[i]=str[i]+25-32;
                }
                else{
                    if('a'<str[i]&&str[i]<='z'){
                        str[i]=str[i]-32-1;
                    }
                    else{
                        str[i]='!';
                    }
                }
            }
            
        }
        i++;
    }
}
int main(void){
    //int size=60;
    char str[60];
    printf("Insert  word:\n");
    scanf("%s[\n]",str);
    shift_troca_string(str);
    printf("%s\n",str);
    return 0;

}