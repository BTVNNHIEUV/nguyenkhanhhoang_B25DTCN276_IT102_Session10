#include <stdio.h>

int main() {
    int n = 6;
    int arr[] = {64, 25, 12, 22, 11, 90};
    int x = 25; // s? c?n tìm
    int i, j, minIndex, temp;
    int min;
    min = arr[0];
    
    for(i = 1; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("So nguyen nho nhat trong mang la: %d\n", min);

    for(i = 0; i < n - 1; i++){
        minIndex = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("\nMang sau khi sap xep theo thu tu tang dan: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    int left = 0, right = n - 1, mid;
    int found = 0;
    while(left <= right){
        mid = (left + right) / 2;
        if(arr[mid] == x) {
            printf("\n\nPhan tu %d co chi so %d trong mang da sap xep.\n", x, mid);
            found = 1;
            break;
        } else if(arr[mid] < x){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    if(!found){
        printf("\n\nKhong tim thay phan tu %d trong mang.\n", x);
    }

    return 0;
}
