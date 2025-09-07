// PROGRAM FOR CALENDER ONE MNH
#include<stdio.h>
void main(){
	long int td=0;
int d,m,y,i,rem,h,b;
printf("Enter year:");
scanf("%d",&y);
printf("Enter month:");
scanf("%d",&m);
// CALCULATE DAY
for(i=1;i<y;i++)
{if(i%4==0 && i%100!=0 || i%400==0)
{td=td+366;}
else{td=td+365;}
}
for(i=1;i<m;i++)
{if(i==2)
{if((y%4==0 && y%100!=0) || (y%400==0 ))
{td=td+29;}
else{td=td+28;}
}
else{if(i==4|| i==6||i==9||i==11)
         {td=td+30;}
         else{td=td+31;}
      }
}
// CALCULATE WEEKDAY
td=td+1;
rem=td%7;
// CALCULATE DAY IN MONTH
if(m==2)
{if((y%4==0 && y%100!=0) || (y%400==0 ))
{d=29;}	
else{d=28;}
}
else{if(m==4|| m==6||m==9||m==11)
         {d=30;}
      else{d=31;}
}
// print calender
printf("\n\n\t\tMONTH:%d YEAR:%d\n\n",m,y);
printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
for(i=1;i<=rem;i++)
{printf("\t");}
	h=7-rem;
	for(i=1;i<=h;i++)
	{printf("%d\t",i);}
	printf("\n");
b=1;
for(i=h+1;i<=d;i++)
{if(b==8)
{printf("\n");
b=1;}
printf("%d\t",i);
b++;
}
printf("\n\n");
}


