#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<string.h>
void cd();
void vote();
void result();
struct candidate_detail{
	char name[20];
	char party[20];
	char symbol;
	int vote;
};
struct candidate_detail c[10];
int spassword,wpassword,n,sp,wp;
int main()
{
	cd();
	a:
	printf("\n Enter password to start vote:");
	scanf("%d",&sp);
	if(sp==spassword)
	{vote();}
	else{goto a;}
	b:
		printf("\n Enter password for result:");
	scanf("%d",&wp);
	if(wp==wpassword)
	{result();}
	 else{goto b;}
}
void cd(){
	int i;
printf("      THIS WORK IS DONE BY ELECTION COMMISSION\n\n");
printf("Enter the number of candidate:");
scanf("%d",&n);
printf("\nEnter %d candidate details",n);
for(i=0;i<n;i++)
{printf("\n\n\nEnter the %d candidate detail:",i+1);
printf("\n\nEnter name:");
scanf("%s",c[i].name);
printf("\nEnter party:");
scanf("%s",c[i].party);
printf("\nEnter symbol:");
scanf("%s",&c[i].symbol);
}
printf("\n Enter set password for start vote:");
scanf("%d",&spassword);
printf("\n Enter password for watching result:");
scanf("%d",&wpassword);
clrscr();
sleep(1);
printf("INFORMATION SUBMIT SUCCESFULLY");
}
void vote()
{
	int i;
char v;
printf("\n VOTING START");
while(1)
{
	printf("\n\n\nPARTY \t\t\t \tSYMBOL");
	for(i=0;i<n;i++)
	{printf("\n\n%s\t\t\t\t%c",c[i].party,c[i].symbol);
	}
	printf("\nEnter vote by symbol:");
	scanf("%s",&v);
	for(i=0;i<n;i++)
	{if(c[i].symbol==v)
	{c[i].vote+=1;}
	}
	if(v=='0')
	{break;}
	clrscr();
	sleep(1);
	printf("\nPress 0 for stop voting");
	
}
}
void result(){
	clrscr();
	sleep(1);
	int i;
	for(i=0;i<n;i++)
	{
printf("\n\nCandidate_name:%s\nParty:%s\nSymbol:%c\nVote:%d:",c[i].name,c[i].party,c[i].symbol,c[i].vote);
	
}
}

