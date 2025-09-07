#include<stdio.h>
void main(){
	long int td=0;
int d,m,y,i,rem;
printf("Enter year:");
scanf("%d",&y);
printf("Enter month:");
scanf("%d",&m);
printf("Enter date:");
scanf("%d",&d);
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
td=td+d;
rem=td%7;
switch(rem){
	case 0:{printf("SUNDAY");break;}
	case 1:{printf("MONDAY");break;}
	case 2:{printf("TUESDAY");break;}
	case 3:{printf("WEDNESDAY");break;}
	case 4:{printf("THURSDAY");break;}
	case 5:{printf("FRIDAY");break;}
	case 6:{printf("SATURDAY");break;}				}
}
