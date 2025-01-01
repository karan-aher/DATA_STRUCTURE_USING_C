#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
clrscr();
printf("\n Enter size of Array: ");
scanf("%d",&n);
printf("\nEnter Array Elements are: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i-1;j>=0&&a[j]>temp;j--);
{
a[j+1]=a[j];
}
a[j+1]=temp;
}
printf("\n Sorted Array Elements are:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
}