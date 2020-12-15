/*armstrong no*/
#include <stdio.h>
#include <math.h>
int main(){
	int n,i, sum,ld, p, z,nn;
	printf("Enter the no.:");
	scanf("%d", &n);
	for (i=1;i<=n;i++){
		sum=0;
		nn=i;
		p= (int)log10(nn)+1;
		while (nn>0){
		ld=nn%10;
		z=pow(ld,p);
		sum+=z;
		nn=nn/10;}
		if(sum==i){
			printf("%d,", i);
		}}
	return 0;
}
