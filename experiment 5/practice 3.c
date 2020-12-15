/*divisble no by 3 & 5*/
#include <stdio.h>
#include <stdlib.h>
 

int main( ){
	int n,i,z, k;
	printf("Enter the upper limit:");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		z= i%5;
		k= i%3;
	if(z==0 && k==0){
	printf("%d is divisible by three and five.\n", i);} 
	}return 0;
	
}
	
	
