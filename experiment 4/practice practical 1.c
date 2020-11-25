
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int no;
    printf("Enter the number:");	
	scanf("%d", &no);
	
	if(no%2==0){
		printf("This is even number.");
	}
	else{printf("This is odd number.");
	}
	
	return 0;
	
} 
