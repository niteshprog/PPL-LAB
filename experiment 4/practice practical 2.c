
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int no;
    printf("Enter the number:");	
	scanf("%d", &no);
	
	if(no>0){
		printf("This is positive number.");
	}else if (no<0){
		printf("This is negative number.");
	}
	else{printf("This is zero.");
	}
	
	return 0;
	
} 
