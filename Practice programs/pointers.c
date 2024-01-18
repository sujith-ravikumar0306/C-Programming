//POINTERS IN C:-

/*

#include<stdio.h>
int main(){

int a=10,*ptr,**ptrptr;     //'**ptrptr' is a double pointer pointing towards a pointer
ptr=&a;
ptrptr=&ptr;

printf("Value of a: %d",a);
printf("\nValue of a: %d",*ptr);
printf("\nValue of a: %d",**ptrptr);//pointer(*ptrptr pointing address of *ptr) pointing pointer (*ptr that points the value of a);
printf("\nAddress of a: %d",&a);
printf("\nAddress of a: %d",*&ptr); //by default '*' and '&' cancel each other.
printf("\nAddress of a: %d",ptr);
printf("\nHexa decimal address:%x",ptr);
printf("\nAddress of a:%d",*ptrptr);//a pointer pointing towards a pointer(which contains address of a);
printf("\nSIZE OF POINTER: %d",sizeof(ptr));

return 0;
}



//pointer assignments
#include<stdio.h>
int main(){
int a=10,b=20;
int *p,*q;

  //  p=&a;
    //q=p;              //ptr *q poins toward value in *p
    //*q=*p;              //accessing illegal memory location

    p=&a;
    q=&b;
    *q=*p;              //assigns the value in (*p)'s address to variable address at (*q)

    printf("p=%d,q=%d",*p,*q);

return 0;
}



//pointer arithmatic
#include<stdio.h>
int main(){
int a[5]={1,2,3,4,5},*p,*q,*r,*s,d,i;
p=&a[0],q=&a[0],r=&a[0],s=&a[0];
printf("Value of a[0]=%d\n",a[0]);
printf("a=%d\n",&a);            //address from addressof operator(&)
printf("a=%d\n",a);             //address from internal pointer
printf("a=%d\n",&a[0]);         //address from base element (first element in array)
printf("a=%d\n",p);             //returns address of a with a pointing variable

//addition

//p+=2;
//printf("p=%d\n",p);             //returns address of a + 2 x (int) = address of a+ 8 bytes

//p+=5;
//printf("p=%d\n",p);             //returns address of a + 5 x (int) = address of a+ 20 bytes [only after assignment of p+=2]

//p=p+2;
//printf("a=%d\n",p);            //returns address of a + 2 x (int) = address of a+ 8 bytes
//printf("value of a[p+2]:%d\n",*p);     //returns the integer at the address calculated above (3 in given array)

//subraction

//d=q-p;
//printf("a=%d\n",p);            //returns address of a + 2 x (int) = address of a+ 8 bytes
//printf("value of a[p-q]:%d",d);     //returns the integer at the address calculated above (3 in given array)


//increment/decrement
printf("\n***Before increment address=%d***",p);
printf("\npost increment:\n");
for(i=0;i<5;i++){
    printf("Address[%d]:%d\n",i,p++);
    printf("incremented value=%d\n",p);
    printf("\nValue[%d]:%d\n",i,*p);
}

printf("\n***Before increment address=%d***",q);
printf("\n\npre increment:\n");
for(i=0;i<5;++i){
    printf("Address[%d]:%d\n",i,++q);
    printf("incremented value=%d\n",q);
    printf("\nValue[%d]:%d\n",i,*q);
}

printf("***\nBefore decrement address=%d***",r);
printf("\n\npre decrement:\n");
for(i=5;i>=0;--i){
    printf("Address[%d]:%d\n",i,r--);
    printf("incremented value=%d\n",r);
    printf("\nValue[%d]:%d\n",i,*r);
}

printf("***\nBefore decrement address=%d***",s);
printf("\n\npost decrement:\n");
for(i=5;i>=0;i--){
    printf("Address[%d]:%d\n",i,s++);
    printf("incremented value=%d\n",s);
    printf("\nValue[%d]:%d\n",i,*s);
}

return 0;
}



//problems on arrays

#include<stdio.h>
void main(){
     int a=10;
     char b=" ";

     const int *p=&a;// if only int, throws no error.
     printf("Value of *p:%d\n",*p);
     printf("Value of a:%d\n",a);
     a+=20;
     printf("Value of *p:%d\n",*p);
     printf("Value of a:%d",a);

     printf("\n%c",b-32);

}


//void pointer (empty pointer that can be type-casted to any datatype)


#include<stdio.h>
int main(){

void *p;                                 // single void pointer to access all data-types by type catsing

int a=10,*a1;
a1=&a;
p=&a;                                   //void to int
printf("a=%d\n",*a1);
printf("a=%d\n",*(int*)p);              //typecasting (void *p) to (int*) type


float b=2.2,*b1;                        //void to float
b1=&b;
p=&b;
printf("b=%f\n",*b1);
printf("b=%f\n",*(float*)p);            //typecasting (void *q) to (float*) type

char c='c',*c1;                         //void to char
c1=&c;
p=&c;
printf("c=%c\n",*c1);
printf("c=%c\n",*(char*)p);               //typecasting (void *r) to (char*) type

double d=20.22,*d1;                     //void to double
d1=&d;
p=&d;
printf("d=%lf\n",*d1);
printf("d=%lf\n",*(double*)p);               //typecasting (void *r) to (double*) type


return 0;
}



//null pointer

#include<stdio.h>
int main(){
    //int *ptr;                       // acts as an wild pointer
    //printf("ptr=%d\n",ptr);         //uninitialized pointer value is null (0) by default
   // printf("*ptr=%d\n",*ptr);

    //int*p=NULL;
    //printf("ptr=%d\n",p);         //initialized pointer value to NULL (0) by default
   // printf("*ptr=%d\n",*p);

   int *q=NULL;
    //q=(int *)malloc(5*sizeof(int*));      //if any problem allocating address, the *q is NULL value
   if(q==NULL){
    printf("Memory not allocted!");
   }
   else{
    printf("Memory=%d\n",q);
    printf("Content=%d",*q);
   }

}



//Dangling pointers (pointers that point to a address that hang freely)

#include<stdio.h>
int main(){
//dangling pointer concept from scope of variable
int *ptr2;
{
    int a=10;       //local scope variable with memory
    ptr2=&a;        //memory assigned to pointer
    printf("*ptr2(inside scope)=%d\n",*ptr2);        //ptr printing the content of its memory
}
    printf("*ptr2(outside scope)=%d\n",*ptr2);       //pointer with memory assigned with no value(dangling pointer).
                                                     //can give same output as printf in local scope since the memory assigned to variable a in RAM
                                                     //calling other functions may allocate the same memory as that of variable a, and now it becomes dangling pointer.


//assigning a pointer to memory location=(size of (int*))
int *ptr=(int*)malloc(sizeof(int*));
printf("ptr:%d\n",ptr);                                      //valid address
*ptr=10;
printf("*ptr:%d\n",*ptr);
//freeing the memory of *ptr
free(ptr);                                                  //now *ptr becomes a dangling pointer that points towards a address but with no assigned value (Invalid address)
ptr=NULL;                                                   //dangling pointer is made unreferencable object

printf("ptr(after memory made free):%d\n",ptr);             //*ptr is now an invalid address(address that is of no use).

printf("*ptr(after memory made free):%d\n",*ptr);           //**comment line-210 to execute this line**
                                                            //garbage value since the ptr is made free (erased memory content).
                                                            //also has effect of (line-222) accessing unreferenced memory location '0'.


return 0;
}


*/

































































