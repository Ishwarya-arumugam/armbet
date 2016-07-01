#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,sum=0,t,a,b;
clrscr();
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
t=i;
//printf("t=%d",t);
while(t>0)
{
j=t%10;
t=t/10;
sum=sum+(j*j*j);
}
//printf("\nsum=%d,i=%d",sum,i);
if(sum==i)
printf("%d",sum);
sum=0;
}
getch();
}
