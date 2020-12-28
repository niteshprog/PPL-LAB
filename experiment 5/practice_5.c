//Reversing_the_number_without_do_while_and_checking_Palindrome//

#include<stdio.h>

int sub(int n)
{
	int rev=0,i,t;
	t=n;
	while( n>0)
	{
		rev*=10;
		i=n%10;
		rev+=i;
		n=n/10;
	}
	printf("%d is the reversed number.\n", rev);
	if(rev==t)
	{
		printf("%d is Palindrome number.", t);
	}else
	{
		printf("%d is not Palindrome number.", t);
	}return 0;
}

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d", &n);
	sub(n);
	return 0;
}
