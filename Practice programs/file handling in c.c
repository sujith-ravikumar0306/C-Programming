//FILE HANDLING IN C:-

/*

//writing a file in c

#include<stdio.h>

void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","w");
    if(fp==NULL){
        printf("File doesnt exist");
        exit(1);
    }
    else{
        char ch[20];
    char s[20]="string into file";
    int a=20;   //number to a file
    printf("Write something to push into file:");
    gets(ch);

    fputs(ch,fp);             //user input into the file
    fprintf(fp,"\n%d ,%s",a,s);
    fclose(fp);
    printf("Written successfully!");
    }

}



//reading something from a file

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r");
    if(fp==NULL){
        printf("error!");
        exit(1);
    }
    //read using fgetc function
    while(!feof(fp)){
        char ch=fgetc(fp);
        printf("%c",ch);        //all character until feof (end of file).
    }
    //read using fgets function
    while(!feof(fp)){
        char str[100];
        fgets(str,100,fp);
        printf("%s",str);
    }

}



//appending a file in c

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","a");
    if(fp==NULL){
        printf("error!");
        exit(1);
    }
    printf("Enter the text to append(specify new line with \'\\n\' character):");
    char str[50];
    gets(str);
    fprintf(fp,"%s\n",str);
    fclose(fp);
    printf("Appended successfully!");
}


//fseek(file_pointer,offset,SEEK_SET/SEEK_CUR/SEEK-END)

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    fp=fopen("ab.txt","r+");    //must not be opened in writing mode
    if(fp==NULL)
    {
        printf("File not found!");
        exit (1);
    }

    fseek(fp, 6, SEEK_SET);
    char ch1=fgetc(fp);

    // Printing position of pointer
    printf("%c",ch1);

    fseek(fp, -4, SEEK_CUR);
    char ch2=fgetc(fp);

    // Printing position of pointer
    printf("\n%c",ch2);
}



//ftell()-used to return the position of pointer with respect to starting of file

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    int pos;
    fp=fopen("ab.txt","r+");    //must not be opened in writing mode
    if(fp==NULL)
    {
        printf("File not found!");
        exit (1);
    }
    pos=ftell(fp);
    printf("Positin of pointer: %d",pos);   //always the starting position of pointer is zero

    fseek(fp, 6, SEEK_SET);     // 0+6=(0,1,2,3,4,5,6)=7th position
    char ch1=fgetc(fp);

    // Printing position of pointer
    printf("\ncurrent char:%c",ch1);
    pos=ftell(fp);
    printf("\nPositin of pointer: %d",pos);

    fseek(fp, -4, SEEK_CUR);    //6-3=(3,2,1,0)=4th position
    char ch2=fgetc(fp);

    // Printing position of pointer
    printf("\ncurrent char:%c",ch2);
    pos=ftell(fp);
    printf("\nPositin of pointer: %d",pos);

}



//rewind()- to move the file pointer to beginning of file

#include<stdio.h>
#include<stdlib.h>

void main()
{
 FILE *fp=NULL;
 char ch;
 fp=fopen("ab.txt","r+");
 if(fp==NULL){
    printf("File not found!");
    exit (1);
 }
 printf("Before rewind function [with fseek()]:");
 fseek(fp,7,SEEK_SET);
 while(!feof(fp))
 {
     ch=fgetc(fp);
     printf("%c",ch);
 }

 printf("After rewind function:");
 rewind(fp);    //move back the cursor to starting
 while(!feof(fp))
 {
     ch=fgetc(fp);
     printf("%c",ch);
 }

 fclose(fp);
}



//program to count no. of lines in a file

#include<stdio.h>
#include<stdlib.h>

void main()
{
 FILE *fp=NULL;
 char ch;
 int count=1;
 fp=fopen("ab.txt","r");
 if(fp==NULL){
    printf("File not found!");
    exit (1);
 }
 while(!feof(fp))
 {
     ch=fgetc(fp);
     if(ch=='\n'){
        count+=1;
     }
 }
 fclose(fp);
 printf("No. of lines= %d",count);
}



*/

//copy contents of one file to another

#include<stdio.h>
#include<stdlib.h>

void main()
{
 FILE *fp1=NULL,*fp2;
 char ch;
 fp1=fopen("ab.txt","r");       //source file
 if(fp1==NULL){
    printf("File not found!");
    exit (1);
 }

 fp2=fopen("abc.txt","w");      //destination file
 while(!feof(fp1))
 {
     ch=getc(fp1);
     fputc(ch,fp2);
 }
 fclose(fp1);
 fclose(fp2);
 printf("File copied to another file successfully!");
}





































