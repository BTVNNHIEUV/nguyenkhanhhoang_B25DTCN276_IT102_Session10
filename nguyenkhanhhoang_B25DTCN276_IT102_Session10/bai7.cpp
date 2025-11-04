#include <stdio.h>

int main(){
    int n = 5;
    int a[] = {1, 2, 3, 4, 5};
    int x = 3;
    int left = 0, right = n - 1, mid;
    int found = 0;

    while(left <= right){
        mid = (left + right) / 2;

        if(a[mid] == x){
            printf("%d\n", mid);
            found = 1;
            break;
        } else if(a[mid] < x){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    if(found == 0){
        printf("Khong tim thay\n");
    }

    return 0;
}
