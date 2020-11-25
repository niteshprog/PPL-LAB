#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    double  a,b,c;
	printf("Enter the coeff. of x^2:");
	scanf("%lf", &a);
	printf("Enter the coeff. of x:");
	scanf("%lf", &b);
	printf("Enter the coeff. of constant:");
	scanf("%lf", &c);
	
	double root1 = (-b + sqrt(b*b-4*a*c))/2*a;
	double root2 = (-b - sqrt(b*b-4*a*c))/2*a;
	printf("The first root is %f and the second one is %f", root1, root2);
	
	return 0;
} 
