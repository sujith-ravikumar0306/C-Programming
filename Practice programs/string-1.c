//input="a2b3c2d1"
//output="aabbbccd"




#include<stdio.h>
int main(){
    int temp,i,j;
    char s[30];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
                if(s[i]>='0' && s[i]<='9'){
                 temp=(int)s[i]-48;
                 for(j=0;j<temp;j++){
                    printf("%c",s[i-1]);
                 }
            }
        }

return 0;

}











