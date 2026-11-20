#include <stdio.h>
int main(){
    int arr[100],n,i,sum = 0;

    printf("Enter the number of elemnet ; ");
    scanf("%d",&n);

    printf("Enter %d element:",n);
    for (i = 0;i < n; i++){
        scanf ("%d",&arr[i]);

    }
    printf("Sum of the array element=%d/n",sum);

    return 0;
}