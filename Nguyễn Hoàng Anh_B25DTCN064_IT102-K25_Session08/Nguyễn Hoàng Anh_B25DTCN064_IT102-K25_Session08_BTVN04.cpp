#include <stdio.h>

int main() {

    int i, n;

    printf("So phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n]; 
    
    for(i = 0; i < n; i++){
    	printf("array[%d] = ",i);
    	scanf("%d", &array[i]);
	}

    return 0;
}
