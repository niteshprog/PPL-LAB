#include <stdio.h>
#include <stdlib.h>


int main()
{
	double m;
	printf("Enter the temperature in Celcius");
	scanf("%lf", &m);
	double z = (m*9/5)+32;
	printf("%f Celcius is %f in Fahranheit.", m,z);
	
	double k= m+ 273.15;
	printf("\n%f Celcius is %f in Fahranheit.", m,k);
	
	
	return 0;
}
