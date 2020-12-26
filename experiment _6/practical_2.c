 #include<stdio.h>
#include<math.h>

int triangle_area(int base, int height)
{
    int area=0;
    area+=(base*height*0.5); 
    return area;
}
int main()
{
    int l,base, height;
    printf("Enter the base(integer only):\n");
    scanf("%d", &base);
    printf("Enter the heigt(integer only):\n");
    scanf("%d", &height);
    l= triangle_area(base, height);
    printf("The area of this triangle is:%d", l);
    return 0;
}
