//using multi-line input for strings in console and print it

/*

#include<stdio.h>
void main(){
    char arr[20];
    printf("Enter a string:");
    scanf("%[^.]s",arr);    //accepts any no. of lines until a period is found.
    printf("%s",arr);
}

//priority among operators in an expression

//1st-> *,/,%
//2nd-> +,-
//3rd-> =

#include<stdio.h>
void main(){
    int a;
    a= 6/4+3*6.5-8/4;
    printf("a=%d",a); //output=18
}


//representation of a floating point constant with 'e/E' expression

#include<stdio.h>
void main(){
    float a= 12.34e5;   //it is equal to 12.34 x 10^5
    //the part before 'e' is mantissa and part after it is exponent.

    printf("%f",a);     //output=1234000.000000

    float b= 12.34e-5;  //it is equal to 12.34 / 10^5       //the output is same as that of a and need to be verified.

    printf("\n%f",a);     //output=1234000.000000

}



//addition of different datatypes

#include<stdio.h>
void main(){
    int a=10;       //int is converted to float before adding
    float b=12.5;
    double c=10.5;
    char d='5';            //ascii equivalent of number "5";
    printf("%lf",a+b+c+d);   //86.000000     //only works with formats "%f" and "%lf", and output=0 with "%d"


       // NOTE: in inter-data-type addition between int and float, (int to float conversion and then execution)
       // the result is always float.




//addition of ratios in float

#include<stdio.h>
void main(){
    printf("Value of \"(float)5/2+5/2\"=%f",(float)5/2+5/2);  //output=4.500000

    //here the first '5/2'(near float) is evaluated as float = 2.500000
    //the next '5/2' however is considered as integer = 2 (decimal part omitted)

    //as the result we get 2.500000+2.000000=4.5000000
}

*/

//some uncommon printf statements

#include<stdio.h>
int main(){
int x=5;
printf("%d",x*2.5);     // output=0 , since the double is multiplied in printf, the result must also be formatted to double.

int a=50;
printf("\n%d",a,10);    //takes the integer or variable nearest to comma operator.

printf("\n%d");         //prints an garbage value(float,double,char are all set to 0 by default)

printf("%d",printf("\nprintf "));
//innermost printf is executed 1st and prints ,"printf " in a new line.
//now the outer printf with "%d" prints no. of chars in inner printf = 8 (new line'\n','p','r','i','n','t','f',space' ').

//int a=14;             // this will cause an error as redefinition of a variable is not allowed.
//printf("\n%d",a);

//void z;
//printf("\n%d",z);     //formatting a void variable will cause error

int import=2;           // import is a valid variable name (volatile,true,false are not)
printf("\n%d",import);

return 0;
}
