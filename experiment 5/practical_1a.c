
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
void main()
{
	printf("Let's check for the Armstrong number.\n");
	int armno;
	printf("Enter the number to check the armstrong number:\n");
	scanf("%d", &armno);
	armstrong(armno);
}
