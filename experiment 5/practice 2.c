/*fibonacci series*/
#include <stdio.h>
#include <stdlib.h>
 

int main( ){
	int n, i, t1,t2,z;
	printf("Enter the no.:");
	scanf("%d", &n);
	t1=0;
	t2=1;
	for(i=0; i<=n; i++){
		z=t2;
		t2=t1+t2;
		t1=z;
	printf("%d,", t2);}
	return 0;
	
}
	
	
