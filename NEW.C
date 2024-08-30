#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int i;
void box()
{
	printf("%c",218);
	for(i=0;i<=70;i++)
	{
		printf("%c",196);
	}
	printf("%c",191);
	for(i=0;i<=20;i++)
	{
		printf("%c\n",179);
	}
	printf("%c",192);
	for(i=0;i<=70;i++)
	{
		printf("%c",196);
	}
	gotoxy(76,28);
	printf("%c",217);

}
void fs()
{
	int i;
//	box();
	char *str=" 1 1 1 1 1";
	clrscr();textcolor(RED);
	box();
	//textbackground(5);
	window(1,1,80,25);
	gotoxy(35,13);
	for(i=0;i<=strlen(str);i++)
	{
		textcolor(0+i);
		cprintf("%c",1,str[i]);
	       //	cprintf("%c",220);
		delay(240);
	}   //   cprintf("%c",220);

}
void start()
{
	textbackground(5);
	clrscr();
	box();
	gotoxy(31,12);
	for(i=0;i<=25;i++)
	{
		textcolor(25);
		cprintf("%c",196);
	}
	gotoxy(39,12);
	printf("\n\t\t\t\t");
	cprintf("%c%c%c WELCOME TO DCC %c%c%c",4,3,4,4,3,4);
	printf("\n\t\t\t      ");
	for(i=0;i<=25;i++)
	{
		textcolor(25);
		cprintf("%c",196);

	}
	delay(2000);
	clrscr();
}
void logpage()
{
int c;
	 clrscr();box();  textcolor(RED);//textbackground(9);
	 gotoxy(36,2);cprintf("%c Login As...",234);//gotoxy(2,2);
	 printf("\n");
	 for(i=2;i<=75;i++){printf("%c",196);}
	 printf("\n"); gotoxy(3,3);
	 cprintf("   \n%c1.%c  Teacher     %c2.%c  Student     %c0.%c  Exit.",91,93,91,93,91,93);
	 printf("\n");
	 printf("   PRESS KEY : ");
	 scanf("%d",&c);
	 if(c==1){tea();}
	 delay(200);
}
void logs()
{
	delay(200);
	clrscr();
	box();
	gotoxy(33,11);
	for(i=0;i<=10;i++)
	{
		textcolor(24);
		cprintf("%c",196);
	}
	printf("\n");
	gotoxy(33,12);
	textcolor(RED+BLINK);
	cprintf(" %c Login...",234);
	printf("\n\t\t\t        ");
	for(i=0;i<=10;i++)
	{
		textcolor(24);
		cprintf("%c",196);
	}
	delay(1000);

}
int tea()
{
int n;
printf("    1.) New Admisson.\t 2.)Check Student Detail. 3.) Add Fee.");
printf("   \nPRESS KEY : ");
scanf("%d",&n);
if(n==1)
{
	printf("Enter Name : ");
	}
else if(n==2){
printf("Enter student Roll No:");}
else if(n==3){
printf("Enter student Roll No: ");
printf("Enter student name :");}
return 0;
}
void main()
{
	int g();
	textbackground(7);
	clrscr();
	window(1,25,25,45);
	box();
	g();
	fs();
	start();
	logs();
	logpage();
	getch(); }
int g(){
 int gd=DETECT,gm;
int x=320,y=240,radious;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(radious=25;radious<=125;radious=radious+20)
	circle(x,y,radious);/*
	char name[10];
	printf("Enter Your Name :");
	scanf("%c",&name);
	printf(" Your Name : %c",name);*/
		delay(5000);
       //	getch();
	closegraph();
	return 0;}



