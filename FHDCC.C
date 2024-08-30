/*			FILE HEANDELING FOR DCC SOFERE		*/
//**********************************************************************
#include<stdio.h>
#include<conio.h>
#include<time.h>
int main(){
	FILE *fptr ;
	char name[20],fname[20],cname[50];
	char vil[20],po[20],ps[20],dist[20],st[10],count[10];
	char rel[10];
	int mno[10],aadhar[12],fee;
	time_t t;
	time(&t);
	clrscr();
	// Add Recoard in file
fptr=fopen("stdetail.txt","a+");
	fprintf(fptr,"***********   %s   ***********",ctime(&t));
	//fprintf("Welcome");
	fclose(fptr);
	return 0;



}