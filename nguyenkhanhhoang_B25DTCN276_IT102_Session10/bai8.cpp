#include <stdio.h>

int main(){
    int n = 6;
    int a[] = {5, 1, 8, 3, 2, 7};
    int x = 5;
    int i, j, temp;
    int left, right, mid;
    int found = 0;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    left = 0;
    right = n - 1;

    while(left <= right){
        mid = (left + right) / 2;

        if(a[mid] == x){
            printf("Chi so cua phan tu can tim: %d\n", mid);
            found = 1;
            break;
        } else if(a[mid] < x){
            left = mid + 1;
        } else{right = mid - 1;}
    }

    if(found == 0)
        printf("Khong tim thay\n");

    return 0;
}
