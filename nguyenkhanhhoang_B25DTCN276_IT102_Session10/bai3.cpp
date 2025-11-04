#include <stdio.h>

int main(){
    int a[] = {5, 2, 4, 6, 8, 10, 3};
    int n = 7;
    int x, i, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++){
        if(a[i] == x){
            printf("Tim thay tai chi so %d\n", i);
            found = 1;
            break;
        }
    }
    if(found == 0){
        printf("Khong tim thay\n");
    }
    return 0;
}
/* nhu mot bai tim x :v
a la mang gia tri,n la so phan tu,x la so can tim,
i Chi so de duyet tung phan tu,found de ghi nho gia tri can tim
*/


