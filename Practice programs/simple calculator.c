/*#include<stdio.h>
void main(){
int a,b,add,sub,mul,div;
int ch;
printf("Enter no.1:");
scanf("%d",&a);
printf("Enter no.2:");
scanf("%d",&b);
printf("\n-----------");
printf("\n1.Add");
printf("\n2.Subract");
printf("\n3.Multiply");
printf("\n4.Divide");
printf("\n-----------");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch){
    case 1: add=a+b;
        printf("sum=%d",add);
        break;
    case 2: sub=a-b;
        printf("diff=%d",sub);
        break;
    case 3: mul=a*b;
        printf("mul=%d",mul);
        break;
    case 4: div=a/b;
        printf("div=%d",div);
        break;
    default:
        printf("Enter valid choice!");


}

}*/

#include<stdio.h>
void main(){
int i,j,k;
for(i=0,j=0,k=3;i<=5,j<=6,k>1;i++,j++,k--){
    printf("\n%d%d%d",i,j,k);
}
}
