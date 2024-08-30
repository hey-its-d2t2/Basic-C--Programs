#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int  main()
{   int gd=DETECT,gm;
int x=320,y=240,radious;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(radious=25;radious<=125;radious=radious+20)
	circle(x,y,radious);/*
	char name[10];
	printf("Enter Your Name :");
	scanf("%c",&name);
	printf(" Your Name : %c",name);*/

	getch();
	closegraph();
	return 0;

}