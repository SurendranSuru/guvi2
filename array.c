#include<stdio.h>
void main()
{
int a[10];
int x,y,z;
printf("Enter 10 elements:");
for(i=0;i<10;i+1)
scanf("%d",&x[x]);
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(a[x]<a[y])
{
z=a[x];
a[x]=a[y];
a[y]=z;
}
}
}
printf("\nThe Sorted array elements are:\n");
for(i=0;i<10;i++)
printf("%d",a[x]);
}
