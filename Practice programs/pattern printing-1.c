/*

*
*   *
*   *   *
*   *   *   *
*   *   *   *   *





#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                printf("*");
            }
            printf("\n");
    }
return 0;
}



  input=5
  output=   1
            0   1
            1   0   1
            0   1   0   1
            1   0   1   0   1



#include<stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if ((i + j) % 2 == 0) printf("1 ");//when(i+j) id divided perfectlty by 2, it is '1' else '0'.
      else printf("0 ");
    }
    printf("\n");
  }
  return 0;
}

input: 4

output: 1
        22
        333
        4444


#include<stdio.h>
int main(){
int n,i,j;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("%d",i+1);
    }
    printf("\n");
}

}


input=4

output= 1
        21
        321
        4321

#include<stdio.h>
int main(){
    int n,value,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=i;j>=1;j--){
                printf("%d",j);
            }
        printf("\n");
    }
}


input=4

output= A
        BB
        CCC
        DDDD




#include<stdio.h>
int main(){
int n,i,j;
printf("Enter a number:");
scanf("%d",&n);
for(i=0;i<=n;i++){
    for(j=i;j>0;j--){
        printf("%c",65+i-1);
    }
    printf("\n");
}
}

input=4

output= 4444
        333
        22
        1



#include<stdio.h>
int main(){
int i,j,n;
printf("Enter a number:");
scanf("%d",&n);
for(i=n;i>0;i-=1)
{
    for(j=i;j>0;j-=1){
        printf("%d",i);//the element(i) changes only when row is changing(refer below program)
    }
    printf("\n");
}
}

input=4

output= 4321
        321
        21
        1

#include<stdio.h>
int main(){
int i,j,n;
printf("Enter a number:");
scanf("%d",&n);
for(i=n;i>0;i-=1)
{
    for(j=i;j>0;j-=1){
        printf("%d",j); // each element-(j) changes with row and coloumn(refer above program)
    }
    printf("\n");
}
}


*/





























