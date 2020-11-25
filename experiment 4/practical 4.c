
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char alpha;
    printf("Enter the alphabet:");	
	scanf("%c", &alpha);
	
	switch(alpha){
		case 'a': printf("This is vowel");
	    break;
		case 'e': printf("This is vowel");
	    break;
		case 'i': printf("This is vowel");
	    break;
		case 'o': printf("This is vowel");
	    break;
		case 'u': printf("This is vowel");
	    break;
		default: printf("This isn't a vowel");
		break;
	}
	
	return 0;
	
} 
