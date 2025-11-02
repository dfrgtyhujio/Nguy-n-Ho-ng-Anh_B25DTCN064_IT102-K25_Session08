#include <stdio.h>

int main() {

    int i, j, n;
    int isPrime = 1; 

    printf("So phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n]; 
    
    for(i = 0; i < n; i++){
    	printf("array[%d] = ",i);
    	scanf("%d", &array[i]);
	}
	
	printf("Mang sau khi nhap la: ");
	for(i = 0; i < n; i++){
    	printf("%d ",array[i]);
	}
	
	printf("\nCac so nguyen to trong mang la: ");
	for(i = 0; i < n; i++){
		if(array[i] <= 1){
			continue;
		}
	    for(j = 2; j < array[i]; j++){
	    		if(array[i] % j == 0){
			isPrime = 0 ;
			break;
		    } 
		}
		if(isPrime == 1){
			printf("%d ", array[i]);
		}
		
	} 
	
    return 0;
}
