#include <stdio.h>

int main() {
    int array[5] = {1, 4, 7, 10, 13};
    int i;
    int found = 0;

    printf("Cac phan tu chan trong mang: ");
    for(i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            printf("%d ", array[i]);
            found = 1;
        }
    }

    if(found == 0){
        printf("Mang khong chua so chan.");
    }

    return 0;
}
