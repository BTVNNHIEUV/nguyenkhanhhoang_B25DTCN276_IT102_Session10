#include <stdio.h>

int main(){
    int n = 6;
    int price[] = {100, 50, 200, 150, 120, 80};
    int id = 3;
    int i, j, temp;
    printf("Gia cua san pham voi ma ID %d: %d\n", id, price[id - 1]);
    
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(price[j] > price[j + 1]){
                temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;
            }
        }
    }
    printf("\nDanh sach gia san pham sau khi sap xep: ");
    for (i = 0; i < n; i++){
        printf("%d ", price[i]);
    }
    return 0;
}
