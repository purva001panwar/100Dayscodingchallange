#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10],i;
	clrscr();
	printf("enter ten number");
	for(i=0;i<10;i++)
	{
		scanf("%d,&n[i]");
	}
	printf("the numbers are");
	for(i=0;i<10;i++)
	{
		printf("%d",n[i]);
	}
	getch();
}
