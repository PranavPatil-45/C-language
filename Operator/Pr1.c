#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter Value Of x:");
	scanf("%d",&x);
	printf("Enter Value Of y:");
	scanf("%d",&y);
	
	printf("(x+y)2 =%d", (x*x) + (2*x*y) + (y*y));	
}

