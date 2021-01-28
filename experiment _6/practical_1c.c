//factorial 
#include <stdio.h>

 int factor(int n)
{
    
    if(n==0)
    return 1; 
    else 
    return n*factor(n-1);
}
int main()
{
    int z;
    scanf("%d", &z);
    printf("%d", factor(z)); 
    return 0;
}
