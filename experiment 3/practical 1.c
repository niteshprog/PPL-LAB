#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("1. Parallelogram, \n2. Trapezoid, \n3. Rhombus, \n4. Sphere, \n5. Ellipse");
	printf("\nEnter the figure choice:");
	int fc;
	scanf("%d", &fc);
	switch (fc){
	case 1:
    printf("Let's find the area of parallelogram");
	double base, height;
	printf("\nEnter the base");
	scanf("%lf", &base);
	printf("\nEnter the height");
	scanf("%lf", &height);
	printf("%f", base*height);
	break;
	
	case 2:
	printf("\nLet's find area of trapezoid");
	double h, sl, ll;
	printf("\nEnter the height");
	scanf("%lf", &h);
	printf("\nEnter the longer side");
	scanf("%lf", &ll);
	printf("\nEnter the shorter side");
	scanf("%lf", &sl);
	printf("%f", (ll+sl/2)+h);
	break;
	
	
	case 3:
	printf("\nLet's find the area of rohombus");
	double br, hr;
	printf("\nEnter the base");
	scanf("%lf", &br);
	printf("\nEnter the height");
	scanf("%lf", &hr);
	printf("%f", br*hr);
	break;
	
	case 4:
	printf("\nLet's find the area of sphere");
	double r;
	printf("\nEnter the radius");
	scanf("%lf", &r);
	printf("%f", 4*3.1415*r*r);
	break;
	
	case 5:
	printf("\nLet's find the area of ellipse");
	double mx, Mx;
	printf("\nEnter the major axis");
	scanf("%lf", &mx);
	printf("\nEnter the minor axis");
	scanf("%lf", &Mx);
	printf("%f", 3.1415*mx*Mx);
	break;
	
	default: 
	printf("You have entered the invalid figure selection");
	break;
	}
	
	return 0;
}
