#include<stdio.h>
void main()
{
int a,x,p,i;
printf("Enter the child");
scanf("%d",&a);
printf("Pairs");
scanf("%d",&p);
for(i=0;i<2*a;i++)
{
x=2*a-i;
if(p!=x)
{
printf("The pair is %d\n",p);
}
}
}
