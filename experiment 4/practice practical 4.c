
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char no;
    printf("Enter the character:");	
	scanf("%c", &no);
	
	if (no>='a' && no<='z' || no>='A' && no<='Z'){
	    printf("This is alphabet");
	}else if(no>='1' && no<='9'){
		printf("This is digit");
	}
	else{printf("This is special character.");
	}
	
	return 0;
	
} 
