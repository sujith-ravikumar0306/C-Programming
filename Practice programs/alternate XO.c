#include<stdio.h>
int fillxo(int m, int n){
int i=0,j,k,l;
int r=m,c=n;
char a[m][n];
char x='X';
while(k<m && l<n){
    for(i=l;i<n;++i){
        a[k][i]=x;
        k++;
    }
    for(i=k;i<m;++i){
        a[i][n-1]=x;
        n--;
    }
    if(k<m){
        for(i=n-1;i>=l;--i){
            a[m-1][i]=x;
            m--;
        }
    }
    if(l<n){
        for(i=m-1;i>=k;--i){
            a[i][l]=x;
            l++;
        }
    }

 x=(x=='O')?'X':'O';
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%c  ",a[i][j]);
    }
    printf("\n");
}

return 0;
}

int main(){
printf("Output for 5 and 6:");
fillxo(5,6);

}









