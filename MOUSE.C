#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	 union 	REGS  i,o;
	 clrscr();
	 i.x.ax=0;
	 int86(0x33,&i,&o);
	 if(o.x.ax==0)
		printf("no");
	 else
	 printf("yes");
	 getch();
	 /*
	char name[10];
	printf("Enter Your Name :");
	scanf("%c",&name);
	printf(" Your Name : %c",name);
	getch(); */

}