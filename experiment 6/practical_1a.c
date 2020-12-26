#include<stdio.h>
#include<math.h>
void armstrong(int armno)
{
	int ac, digits,armsum=0;
	digits=(int)log10(armno)+1;
	ac= armno;
	for(ac= armno; ac>0; ac/=10)
	{
	  int rem= ac%10;
	   armsum+=pow(rem, digits);
	   
		}if (armsum==armno)
		{
			printf("This is armstrong no.");
		}else{
			printf("This is not armstrong no.");
		}
	
    
} 
void coprime(int armno)
 {
    int revnum = 0, dig = 0, hcf, n; 
    int c = armno;
    do
    {
        revnum *= 10;
        dig = c % 10;
        revnum += dig;
        c /= 10;
    } while (c > 0);
    
    printf("This number with reversed digits is: %d\n", revnum);
    for( n=1 ; n<=armno; n++)
    {
        if(armno%n==0 && revnum%n==0){
        	hcf=n;
		}
        }if(hcf==1)
        {
            printf("These are coprime.");
        }else{
            printf("These are not coprime.");
        }
    
 }
int factorial(int n){
    int fac = 1, i;
    
    for (i = n ; i>0 ; --i)
    {
        fac *= i;
    }
    return fac;}

void main()
{
	printf("Let's check for the Armstrong number.\n");
	int armno;
	printf("Enter the number to check the armstrong number:\n");
	scanf("%d", &armno);
	armstrong(armno);
}
