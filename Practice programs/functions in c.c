//FUNCTIONS IN C:-

/*

#include<stdio.h>

int main(){
    int a,b,ch;
    printf("Enter operend 1:");
    scanf("%d",&a);
    printf("Enter operend 1:");
    scanf("%d",&b);
    //printf("\n********Enter operation********\n1.Add\n2.Subract\n3.Multiply\n4.Divide\n5.Exit\n**************************************\n");
    //printf("Enter choice:\n");
            printf("Sum=%d\n",add(a,b));

            printf("Difference=%d\n",sub(a,b));

            printf("Product=%d\n",mul(a,b));

            printf("Quotient=%d\n",div(a,b));



return 0;
}

int add(int a,int b){
int c=a+b;
return (c);
}

int sub(int a,int b){
int c=a-b;
return (c);
}

int mul(int a,int b){
int c=a*b;
return (c);
}

int div(int a,int b){
int c=a/b;
return (c);
}



#include<stdio.h>
void sum(void){             //void in arguments restricts any kind of arguments to be passed.
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}

void main(){
    sum(4,5);               //causes error due to void declaration.
}




//call by value

#include<stdio.h>
void fun(int,int);
void main(){
    int x=2,y=3;
    fun(x,y);
    printf("\n");
    printf("Values inside main():\n");
    printf("x=%d,y=%d",x,y);
}
void fun(int a, int b){                     // making a copy of x and y.
    a=3,b=2;
    printf("Values inside function:\n");
    printf("x=%d,y=%d",a,b);
}



//call by reference

#include<stdio.h>
void fun(int*,int*);
void main(){
    int x=2,y=3;
    fun(&x,&y);
    printf("\n");                       //accessing address as actual parameters
    printf("Values inside main():\n");
    printf("x=%d,y=%d",x,y);
}
void fun(int *a, int *b){
    *a=3,*b=5;                           // direct modification in address
    printf("Values inside function:\n");
    printf("x=%d,y=%d",*a,*b);
}



// passing array as an arguement

#include<stdio.h>

int avg(int[],int);

void main(){
    int arr[]={2,4,6,8,10},average,len,i;
    len=sizeof(arr)/sizeof(arr[0]);
    average=avg(arr,len);
    printf("Average=%d",average);
    for(i=0;i<len;i++){
        printf("%d",arr[i]);
    }
}

int avg(int a[],int l){
    int i,sum=0,avg;
    for(i=0;i<l;i++){
        sum+=a[i];

    }
    for(i=0;i<l;i++){
        a[i]+=1;

    }
    for(i=0;i<l;i++){
        printf("%d",a[i]);
    }
    avg=sum/l;
    return avg;
}



//passing string as an arguement

#include<stdio.h>
#include<string.h>

void strmod(char *,int);

void main(){
    char str[]="hello world";
    int len=strlen(str);
    strmod(str,len);
    printf("%s",str);
}

void strmod(char *ch,int l)
{
    int i;
    for(i=0;i<l;i++){
        ch[5]='-';
    }
}




//return a string from function

#include<stdio.h>

char* display();

void main()
{
    char *str;
    str=display();
    str[0]='Z';
    printf("String=%s",str);

}

char* display()
{
    //static char str[]="hello";  //usage of static makes the scope of variable to global.
    //return str;                 //this return stmt. is only valid when declared as static.
    char *str="hello";
    return str;
}




//return string from function and modify it in main function

#include<stdio.h>

char* display();

void main()
{
    char *str;
    str=display();
    str[0]='Z';                     //editing the string returned from function display().
    printf("String is \"%s\"",str);
}
char* display()
{
    static char a[]="hello";        //storing the string as global(using static)
    return a;
}



//return a pointer from a function

#include<stdio.h>

int* returnPointer(int[]);

void main()
{
    int *p,a[]={1,2,3,4,5};
    //a=a+3;                      //cannot be changed as array variable pointing base address can neither be incremented/decremented.
    printf("Base address=%d\n",*a);
    p=returnPointer(a);
    printf("Pointer address content from function=%d",*p);
}

int* returnPointer(int a[])
{
    a=a+3;        // it is pointer arithmatic,i.e, it is not (base address + 3) but [base address + 3*(sizeof(int))].
    return a;
}




//function pointer-using pointer to call a function

#include<stdio.h>

int sum (int,int);

void main()
{
    int (*ptr)(int,int)=&sum;
    int s=0;
    s=(*ptr)(2,4);              //function passed as argument  with .
    printf("%d",s);
}

int sum(int a, int b)
{
    return a+b;
}



// callback function- passing function as argument to another function

#include<stdio.h>
void sum(int a,int b)
{
    printf("sum=%d ",a+b) ;
}

void diff(int a,int b)
{
    printf("difference=%d ",a-b) ;
}

void display(void (*ptr)(int,int))
{
     (*ptr)(2,3);
}

void main()
{
    display(sum);
    display(diff);
}


//usage of function pointer for switch case-like application

#include<stdio.h>
void add(int a, int b){printf("%d",a+b);}
void sub(int a, int b){printf("%d",a-b);}
void mul(int a, int b){printf("%d",a*b);}
void div(int a, int b){printf("%d",a/b);}

void main()
{
    int ch,a,b;
    int (*ptr[5])(int,int)={add,sub,mul,div};   //function pointer witha array of function addresses
    printf("1.Add\n2.Subract\n3.Multiply\n4.Divide\n"); //"Add()" is in index-0 and other functions are filled in indexes- 1,2 and 3 respectively.
    printf("Enter your choice:");
    scanf("%d",&ch);
    printf("Enter operand 1:");
    scanf("%d",&a);
    printf("Enter operand 2:");
    scanf("%d",&b);
    printf("Result:");
    (*ptr[ch-1])(a,b);                             //choosing the address of function that has been stored in array.
}




//RECURSION IN C

#include<stdio.h>

void disp( int n)
{
    if(n<1){
        return;
    }
    else{
        printf("display(%d):%d\n",n,n);     //Executed in forward direction until condition is  true
        disp(n-1);                          //executed as a returned function on recursion.
        printf("return(%d):%d\n",n,n);
    }
}

void main()
{
    int n=4;
    disp(n);
}




//Sum of n natural numbers using recursion (direct)

#include<stdio.h>

int sum(int n)
{
    int s=0;
    if(n==1)
    {
        return n;
    }

    s=n+sum(n-1);
    return s;
}

void main()
{
    int n,res;
    printf("Enter a num:");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum of natural number till %d = %d",n,res);
}



//factorial of n numbers using indirect recursion

#include<stdio.h>

int fn1(int);
int fn2(int);

void main()
{
    int num;
    printf("Enter a number to find factorial:");
    scanf("%d",&num);
    printf("Factorial=%d",fn1(num));
}

int fn1(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*fn2(n-1);
    }
}

int fn2(int n)
{
    if(n<=1){
        return 1;
    }
    else{
        return n*fn1(n-1);
    }
}



//tail recursion- function recursion after which no task is left behind to execute.

#include<stdio.h>

int display(int n)
{
    if(n<1){
        return 0;
    }
    else{
        printf("%d ",n);
        display(n/2);       //No task is left after the recursive function
    }
}

void main()
{
    printf("---Tail recursive function---\n");
    display(20);
}



//Non-tail recursion -function recurtion which has some task to do after the function call

#include<stdio.h>

int print(int n)
{
    if(n<1){
        return 0;
    }
    else{
        printf("%d ",n);
        print(n/2);
        printf("%d ",n);
    }
}

void main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    printf("--- Non-tail recursive function ---\n");
    print(n);
}

*/

//Example question

#include<stdio.h>

void count(int n)
{
    static int d=1;
    printf("%d ",n);
    printf("%d ",d);
    d++;
    if(n>1){
        count(n-1);             //direct recursion
        printf("%d ",d);        // Non-tail recursion
    }

}

void main()
{
    printf("Direct and non-tailing recursion:\n");
    count(5);
}
























