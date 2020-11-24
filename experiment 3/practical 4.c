#include <stdio.h>
#include <stdlib.h>

int main()

{	
	int days;
	printf("Enter the no of days:");
	scanf("%d", &days);
	int years = days/365;
	int months = (days%365)/30;
	int day = (days%365)%7;	
	
	printf(" %d year, %d month,%d day", years,months,day);
    
	
	return 0;
} 	
	
