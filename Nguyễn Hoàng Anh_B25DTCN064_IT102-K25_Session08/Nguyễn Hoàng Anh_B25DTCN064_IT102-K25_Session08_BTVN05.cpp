#include <stdio.h>

int main() {
    int array[5] = {12, 5, 30, 7, 18};
    int i;
    int max = array[0];
    int min = array[0];

    for(i = 0; i < 5; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }

    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}
