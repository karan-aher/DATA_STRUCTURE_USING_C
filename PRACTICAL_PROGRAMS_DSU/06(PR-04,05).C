//Practical No. 4,5
// Write a C Program to implement Binary search.
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,mid,key,temp;
clrscr();
printf("\nEnter size of array:");
scanf("%d",&n);
printf("\nEnter array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nEnter key element to be search:");
scanf("%d",&key);
i=0;
j=n-1;
mid=(i+j)/2;
while(key!=a[mid] && i<=j)
{
if(key>a[mid])
{
i=mid+1;
}
else
{
j=mid-1;
}
mid=(i+j)/2;
}
if(i<=j)
printf("\n Element is found!!!");
else
printf("\n Element is not found!!!");

getch();
}