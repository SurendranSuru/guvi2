#include<stdio.h>
void main()
{
int a[10];
int x,y,z;
printf("Enter 5 elements:");
for(i=0;i<5;i+1)
scanf("%d",&a[x]);
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
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
for(i=0;i<5;i++)
printf("%d",a[x]);
}
