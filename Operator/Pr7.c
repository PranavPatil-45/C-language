#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("Enter value of x :");
	scanf("%d,",&x);
	printf("Enter value of y :");
	scanf("%d",&y);
	printf("Enter value of z:");
	scanf("%d",&z);
	
	printf("(x+y+z)2=%d", (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x)) );
}
