//find the nearest palindrome number

/*
#include<stdio.h>
int palin(int x){
int temp=x,sum=0,r;
while(temp>0){
    r=temp%10;
    sum=(sum*10)+r;
    temp=temp/10;
}
if(sum==x){
    return sum;
}
return 0;
}
int main(){
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    i=n+1;
    j=n-1;
    while(1){
        if(palin(i)!=0){
            printf("%d",i);
            break;
        }
        if(palin(j)!=0){
            printf("%d",j);
            break;
        }
        i++;
        j--;
    }
return 0;
}


//find common elements in 2D array in single traversal. time complexity= O(mn)

#include<stdio.h>
#define rows 4
#define cols 5
void comele(int matrix[rows][cols]){
int i,j;
int count[rows*cols]={0};
for(i=0;i<rows;i++){
    for(j=0;j<=cols;j++){
        count[matrix[i][j]]++;
    }
}
for(i=0;i<cols*rows;i++){
    if(count[i]==rows){
        printf("%d",i);
    }
}
}
int main(){
int arr[rows][cols]={{1,2,3,4},{1,3,5,7},{1,4,7,9},{1,2,4,5}};
comele(arr);

return 0;
}

*/

