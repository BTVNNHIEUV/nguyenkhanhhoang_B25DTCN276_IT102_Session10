#include <stdio.h>

int main(){
    int a[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i, j, temp;
    //Bbsort
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                //exchange2
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //printmang
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
/*
a la mang gia tri,n la so phan tu,
i dung de dem so lan sap xep
j dieu khien so sanh tung cap phan tu trong mang
temp de giu gia tri tam thoi
*/
