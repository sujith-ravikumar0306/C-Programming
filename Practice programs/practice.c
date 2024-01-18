//use of continue and break keywords:-
/*
#include<stdio.h>
int main(){
int i,n,sum=0;
for(i=0;i<=n;i++){
    printf("\nEnter a num:");
    scanf("%d",&n);
   // if(n>10){
   //     break;//break if input is>10
    }
    if(n>5){
        printf("\nplease enter number<5!");
        continue;//skip the addition in sum if input>5
    }
    sum+=n;
}
printf("\nSum=%d",sum);
printf("\nOut of loop");
return 0;
}
/*
//pointers and variables
#include<stdio.h>
void main(){
int a=10;
int *p=&a;
int **q=&p;
printf("\n%d",a);
printf("\n%d",&a);
printf("\n%d",p);
printf("\n%d",*p);
printf("\n%d",&p);
printf("\n%d",q);
printf("\n%d",*q);
printf("\n%d",**q);
}
*/
/*

//ARRAY CONCEPTS
//length of an array

#include<stdio.h>
int main(){
int count,i,*p,arr[6]={1,2,3,4};
p=&arr;
int n=sizeof(arr)/sizeof(arr[0]);
printf("length of array:%d",n);
//length of actual elements
for(i=0;arr[i]!='\0';i++){
        count++;
}
printf("\nActual elements length:%d",count);
//address of array variable
printf("\nAddress of array variable:%d",&arr);
//address of array variable/base address/address of first element;
printf("\nAddress of 1st element:%d",arr);
//address of 2nd element
printf("\nAddress of 2nd element:%d",arr+1);
//no bound checking found in arrays
printf("\n%d",arr[20]);
printf("\n%d",arr[3]);
}


//calculate the sum of 5 marks and their avg
#include<stdio.h>
int main(){
    int a[10],sum=0,i,osum=0,esum=0;
    float avg;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        //count sum of odd and even elements in array
        if(a[i]%2==1){
        osum+=a[i];
    }
    else{
        esum+=a[i];
    }
    }



//sum of odds
printf("\nSum of odds:%d",osum);
//sum of enens
printf("\nSum of evens:%d",esum);



return 0;
}


//scan 2 arrays of size=5 and store them in third array;
#include<stdio.h>
int main(){
int i,a[5],b[5],c[5];
printf("Enter array-1 elements:");
for(i=0;i<5;i++){
    scanf("\n%d",&a[i]);
}

printf("Enter array-2 elements:");
for(i=0;i<5;i++){
    scanf("\n%d",&b[i]);
}

printf("Total sums in arrays:");
for(i=0;i<5;i++){
    c[i]=a[i]+b[i];
    printf("\t%d",c[i]);
}

}



//2D arrays in c
#include<stdio.h>
int main(){
int i,j,arr[2][3]={1,1,1,2};
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("\n%d,%d:%d",i,j,arr[i][j]);
    }
}

}


//printing two matrices and sum of two matrices
#include<stdio.h>
int main(){
    int i,j,n,m,count=0;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter row size:");
    scanf("%d",&n);
    printf("Enter coloumn size:");
    scanf("%d",&m);
    printf("Enter arry-1 Elements:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter array-1 [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            count+=a[i][j];
        }
        printf("\n");
    }
    printf("Enter array-2 Elements:");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter array-2 [%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
            count+=b[i][j];
        }
        printf("\n");
    }
    printf("\n array-1:");
    printf("\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("\n array-2:");
    printf("\n");
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of arrays:");
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all the entered elements=%d",count);
}
*/

//Transpose of a matrix

#include<stdio.h>
int main(){
    int i,j,n,m;
    int a[10][10],b[10][10];
    printf("Enter row size:");
    scanf("%d",&n);
    printf("Enter coloumn size:");
    scanf("%d",&m);
    printf("Enter array Elements:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter element [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}

/*

#include<stdio.h>
int main(){
    int i,j,n,m,rsum=0,csum=0;
    int a[10][10];
    printf("Enter row size:");
    scanf("%d",&n);
    printf("Enter coloumn size:");
    scanf("%d",&m);
    printf("Enter array Elements:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter element [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered array:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of rows:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            rsum+=a[i][j];

        }
         printf("\nRow-%d [sum=%d]",i+1,rsum);
         printf("\n");
         rsum=0;
    }
    printf("\nSum of coloumns:\n");
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            csum+=a[i][j];
        }
         printf("\nCol-%d [sum=%d]",i+1,csum);
         printf("\n");
         csum=0;
    }
}



//product of two matrices:-
#include<stdio.h>
int main(){

    int n1,n2,m1,m2;
    printf("Enter array-1 row size:");
    scanf("%d",&n1);
    printf("Enter arry-1 coloumn size:");
    scanf("%d",&m1);
    printf("Enter array-2 row size:");
    scanf("%d",&n2);
    printf("Enter arry-1 coloumn size:");
    scanf("%d",&m2);
if(m1!=n2){
    printf("Matrix multiplication not possible");
}
else{
    int i,j,k,sum=0;
    int a[10][10],b[10][10],c[10][10]={0};

    printf("Enter arry-1 Elements:");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            printf("\nEnter array-1 [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter array-2 Elements:");
     for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            printf("\nEnter array-2 [%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("\n array-1:");
    printf("\n");
     for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("\n array-2:");
    printf("\n");
     for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of arrays:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            for(k=0;k<m1;k++){
                sum+=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
            sum=0;
        }
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}

*/
