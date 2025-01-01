//Practical No 8,9
//*Write a c program to implement Selection Sort.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,N,k,temp;
clrscr();
printf("Enter Size of array :");
scanf("%d",&N);
printf("\n Enter Array Elements ");
for(i=1;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<N;i++)
{
k=i;
for(j=i+1;j<N;j++)
{
if(a[j]<a[k])
{
k=j;
}
}
if(k!=i)
{
temp=a[i];
a[i]=a[k];
a[k]=temp;
}
}
printf("\n\n\n Sorting Array Elements Are:  ");
for(j=0;j<N;j++)
{
printf("%d",a[j]);
}
getch();
}