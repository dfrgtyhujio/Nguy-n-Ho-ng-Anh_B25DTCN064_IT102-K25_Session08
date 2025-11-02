#include <stdio.h>

int main() {
    int array[5] = {12, 5, 30, 7, 18};
    int i;

    for(i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            array[i] += 3;
        } else {
            array[i] += 2;
        }
        printf("%d\n", array[i]);
    }

    return 0;
}
