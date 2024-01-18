//STRINGS IN C:-

/*
#include<stdio.h>
int main(){
    char str[]={'a','b','c','d','\0'};
    //scanf("%s",str);
    printf("%s",str);
    printf("\n%d",sizeof(str));

return 0;
}


//geting input string using scanf & gets
#include<stdio.h>
int main(){
    char str1[20],str2[20];
   // printf("Using scanf:");
    scanf("%s",str1);//prints till a space considered to be null char(end of string).
    printf("\n%10.7s",&str1[2]);
    //printf("\nUsing gets:");
    //gets(str2);//prints string till a "\n" enter is pressed.
    //puts(str2);


return 0;
}


//program to print length of string
#include<stdio.h>
#include<string.h>
int main(){
    int i,count1=0,count2=0;
    char str1[20];
    printf("Enter string:");
    scanf("%s",str1);
    printf("String entred:%s",str1);
    //using the strlen() function inside <string.h> header
    printf("\nString length using strlen():%d",strlen(str1));
    //without using strlen() function
    while(str1[i]!='\0'){
        count1++;
        i++;//increment 'i' without fail
    }
    printf("\nString length without strlen() using while loop:%d",count1);

    for(i=0;str1[i]!='\0';i++){}
    printf("\nString length without strlen() using for loop:%d",i);
return 0;
}

//string concatenation


#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="hello",s11[]="hello",s2[20]="world";
    int i,len11,len2;
//using strcat()
printf("\nStr1+Str2 with strcat() : %s",strcat(s1,s2));


//without strcat() function
len11=strlen(s11);
len2=strlen(s2);
printf("\nLength1:%d",len11);
for(i=0;s2[i]!='\0';i++){
    s11[len11+i]=s2[i];
}

printf("\nLength1:%d",len11);
s1[len11]='\0';

printf("\nStr1+Str22 without strcat(): %s",s1);


//usage of strncat() function:-

strncat(s11,s2,3);
printf("\nStr1+Str2 with strncat() : %s",s11);
return 0;
}



//comparing two strings
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[20];
    int i,flag=0;
    printf("Enter str -1:");
    gets(s1);
    printf("Enter str -2:");
    gets(s2);

    //without using strcmp():-
    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
                flag=1;
                break;
        }
    }
    printf("\nStrings are:");
    if(flag==1){
        printf("Not equal!");
    }
    else{
        printf("Equal");
    }

    //using strcmp() function
    printf("\nUsing strcmp() fn:");
    i=strcmp(s1,s2);
    if(i==0){   //when 2 strings are same strcmp() returns 0
        printf("Equal");
    }
    else{
        printf("Not equal!");
    }
    printf("\n%d",i);//'-1' if compared string char in str1 has smaller ASCII value than that of str2
                     //'1'  if compared string char in str1 has larger ASCII value than that of str2

return 0;
}




//reversing a string in c

#include<stdio.h>
#include<conio.h>
int main(){
char str[20],ch,rev[20];
int i,len;
len=strlen(str);
printf("Enter a string:");
gets(str);

//Using strrev() function
printf("\nThe reverse of string (using strrev()): %s",strrev(str));

/*
//without using strrev

    //without second string(using a temp character 'ch')

printf("\nReverse of string(with second string):");
for(i=0;i<len/2;i++){
    rev[i]=str[len-1-i];
}
printf("%s",str);


    //using a secondary string

printf("\nReverse of string(with temp var('ch'):");
for(i=0;i<len/2;i++){
        ch=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=ch;
}
printf("%s",str);

return 0;
}



//string case conversion

#include<stdio.h>
#include<string.h>


int main(){
    char str1[20],str2[20];
    int i;
    //upper to lower
                printf("Enter a string to convert to lower:");
                gets(str1);
                for(i=0;str1[i]!='\0';i++){
                    if(str1[i]>='A' && str1[i]<='Z'){
                    str1[i]+=32;
                    }
                }
                printf("%s",str1);

    //Lower to upper
                printf("\nEnter a string to convert to upper:");
                gets(str2);
                for(i=0;str2[i]!='\0';i++){
                    if(str2[i]>='a' && str2[i]<='z'){
                    str2[i]-=32;
                    }
                }
                printf("%s",str2);


return 0;
}

*/
