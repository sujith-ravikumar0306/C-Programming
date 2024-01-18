// ENUMARATION IN C:-

/*

//two enum variables of same scope cannot have elements in common

#include<stdio.h>
enum abc{a,b,c};
enum xyz{a,b,c};    //this line will throw "redeclaration of enumerator" error.

void main()
{
    enum abc var=c;
    printf("c=%d",var);
}

//uasge of same values of enum in different scopes

#include<stdio.h>

void eg();

enum global{a=10,b,c};

void main()
{
    enum global var1=c;
    enum local{a=20,b,c};
    enum local var=c;
    printf("Value of c in local scope-enum : %d \n",var);
    printf("Value of c in global scope-enum : %d \n",var1);
    eg();
}

void eg(){
    enum fn{a=30,b,c};
    enum fn var=c;
    printf("Value of c in functional scope-enum: %d \n",var);
}

#include<stdio.h>
enum days1{sun,mon,tues,wed=11,thur,fri,sat};
void main()
{
    enum days1 var;
    printf("Sun=%d\n",sun);
    printf("Mon=%d\n",mon);
    printf("Tues=%d\n",tues);
     printf("Weds=%d\n",wed);
      printf("Thur=%d\n",thur);
       printf("Fri=%d\n",fri);
        printf("Sat=%d\n",sat);
         printf("SIZE OF enum variable=%d bytes",sizeof(var));      //size of enum is always the size of an integer
}



//Example:1

#include<stdio.h>
enum abc{a,b,c};
enum xyz{abc};

void main()
{
    enum abc var1;
    enum xyz var2;
    printf("value of enum abc inside enum xyz = %d\n",abc);     //now enum also becomes an element that is mapped to a value.
    printf("Size of abc= %d\n",sizeof(var1));
    printf("Size of xyz= %d",sizeof(var2));
}




//Example:2

#include<stdio.h>
typedef enum abc{
    a=10,
    b,
    c,
    d
}alpha;

void main()
{
       alpha var=d;
       printf("%d",var);        //by default, the value of b=1.
}


*/












































