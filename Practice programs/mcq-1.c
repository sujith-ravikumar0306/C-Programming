/*

#include <stdio.h>

int sum(int arr[]) {
    int sum = 0, i;
    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}

void sample(int *num) {
    int temp = *num;
    *num = *(num + 1);
    *(num + 1) = temp;
}

int main() {
    int arr[5] = {27, 17, 7, 9, 1};
    int i = 0, j;
    for (j = 0; j < 5; j++) {
        sample((i < 4) ? (arr + i + 1) : (arr + i));
        i = (i + 2) % 5;
    }
    printf("sum = %d\n", sum(arr));
return 0;
}

*/

#include<stdio.h>
#include<stdlib.h>
struct st {
    int x;
    struct st *next;
    };
    int main() {
    struct st *temp;
    temp=(struct st*)malloc(1*sizeof(struct st));
    temp->x = 10;
    temp->next = temp;
    printf("%d", temp->next->x);
    return 0;

}

/*

#include<stdio.h>
int main(){
      char *s = "PRO coder";
        int n = 5;
          printf("%.*s", n, s);
            return 0;
}
*/











