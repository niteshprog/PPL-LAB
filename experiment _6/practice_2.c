//function_to_check_Palindrome_no//
#include<stdio.h>

int fncn(int n)
{
	int rev=0,z,t;
	t=n;
	do {
		rev*=10;
		z=n%10;
		rev+=z;
		n=n/10;
	}while(n>0);
	printf("%d is the reversed number.\n", rev);
	if(rev==t)
	{
		printf("This is Palindrome number.");
	}else
	{
		printf("This is not Palindrome number.");
	}
	return 0;
}
int main()
{
	printf("Let's find out wheter the number is Palindrome or not.\n");
	int fn;
    printf("Enter the digit to check:\n");
	scanf("%d", &fn);
	fncn(fn);
	return 0;
}
