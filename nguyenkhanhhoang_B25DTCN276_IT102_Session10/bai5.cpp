#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 2, 2};
    int n = 6;
    int x, i, count = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    //tim&dem
    for(i = 0; i < n; i++){
        if(a[i] == x){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
/* nhu mot bai tim x :v
a la mang gia tri,n la so phan tu,x la so can tim,
i Chi so de duyet tung phan tu,count de dem so lan 
*/

