#include<stdio.h>
#include<conio.h>
int main(){
	char g[9];
char a[10],b[10];
int i,p;
	printf("Enter first player name:");
		scanf("%s",&a);
	printf("Enter second player name:");
		scanf("%s",&b);
printf("%s sign is: O",a);
printf("\n%s sign is: X",b);
for(i=0;i<9;i++)
{g[i]=' ';}
printf("\n\t%c | %c | %c\n\t%c | %c | %c\n\t%c | %c | %c",g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8]);
start:
printf("\n%s enter your position:",a);
scanf("%d",&p);
g[p-1]='O';
printf("\n\t%c | %c | %c\n\t%c | %c | %c\n\t%c | %c | %c",g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8]);
if(g[0]=='O'&&g[1]=='O'&&g[2]=='O'||g[3]=='O'&&g[4]=='O'&&g[5]=='O'||g[6]=='O'&&g[7]=='O'&&g[8]=='O'||g[0]=='O'&&g[3]=='O'&&g[6]=='O'||g[1]=='O'&&g[4]=='O'&&g[7]=='O'||g[2]=='O'&&g[5]=='O'&&g[8]=='O'||g[0]=='O'&&g[4]=='O'&&g[8]=='O'||g[2]=='O'&&g[4]=='O'&&g[6]=='O')
{ printf("\n%s is winner",a);
goto stop;
}
printf("\n%s enter your position:",b);
scanf("%d",&p);
g[p-1]='X';
printf("\n\t%c | %c | %c\n\t%c | %c | %c\n\t%c | %c | %c",g[0],g[1],g[2],g[3],g[4],g[5],g[6],g[7],g[8]);
if(g[0]=='X'&&g[1]=='X'&&g[2]=='X'||g[3]=='X'&&g[4]=='X'&&g[5]=='X'||g[6]=='X'&&g[7]=='X'&&g[8]=='X'||g[0]=='X'&&g[3]=='X'&&g[6]=='X'||g[1]=='X'&&g[4]=='X'&&g[7]=='X'||g[2]=='X'&&g[5]=='X'&&g[8]=='X'||g[0]=='X'&&g[4]=='X'&&g[8]=='X'||g[2]=='X'&&g[4]=='X'&&g[6]=='X')
{ printf("\n%s is winner",b);
goto stop;
}
goto start;
stop:
getch();
}