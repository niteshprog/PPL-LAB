//2.	Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.//
#include<stdio.h>

int main()
{
	int n, i, pos, ne, dp;
		printf("Enter the length of array:\n");
	scanf("%d", &n);
	int a1[n-1];
	printf("Enter all the elements of the array:\n");
    for(i=0; i<n;i++)
	{
		scanf("%d", &a1[i]);
	}printf("This is the present array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d,", a1[i]);
	}printf("\nEnter the position:\n");
	scanf("%d", &pos);
	printf("Enter the new element:\n");
	scanf("%d", &ne);
	n++;
	for(i=n-1; i>=pos; i--)
	{
	a1[i]=a1[i-1];
	}a1[pos-1]=ne;
	for(i=0; i<n; i++)
	{
		printf("%d,", a1[i]);
	}
	printf("\nEnter the position to delete the element.\n");
	scanf("%d", &dp);
	for(i=dp-1; i<n-1; i++)
	{
		a1[i]=a1[i+1];
	}
	for (i=0; i<n-1;i++)
	{
		printf("%d,", a1[i]);
	}
	return 0;
}	
