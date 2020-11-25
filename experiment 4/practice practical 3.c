#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int no;
    printf("Enter the number:");	
	scanf("%d", &no);
	
	if (no%2==0 && no%3==0){
	    printf("This divisble by 2 and 3 both.");
	}else if(no%2==0){
		printf("This is divisible by 2.");
	}else if (no%3==0){
		printf("This is divisible by 3.");
	}
	else{printf("This isn't divisible either by 2 or 3.");
	}
	
	return 0;
	
} 
