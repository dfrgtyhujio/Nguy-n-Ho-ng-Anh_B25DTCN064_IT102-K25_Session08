#include <stdio.h>

int main() {

    int i, n;

    printf("So phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n]; 
    
    for(i = 0; i < n; i++){	
    	do{
		    printf("array[%d] = ",i);
    	    scanf("%d", &array[i]);
    	    
    	    if(array[i] % 2 == 0){
                printf("Gia tri phai la so le. Vui long nhap lai.\n");
            }
        } while(array[i] % 2 == 0);
	}

    return 0;
}
