//Practical No.6,7
//Write a C Program to implement Bubble sort.
#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
 int a[20],i,j,temp,N; 
 clrscr(); 
 printf("Enter size of array: "); 
 scanf("%d",&N); 
 printf("\nEnter Array Elements:"); 
 for(i=0;i<N;i++) 
 { 
 scanf("%d",&a[i]); 
 } 
 for(i=1;i<N;i++) 
 { 
 for(j=0;j<N-i;j++) 
 { 
 if(a[j]>a[j+1]) 
 { 
 temp=a[j]; 
 a[j]=a[j+1]; 
 a[j+1]=temp; 
 } 
 } 
 } 
 printf("\n\n\n Sorting Array Elements are: "); 
 for(j=0;j<N;j++) 
 { 
 printf(" %d",a[j]); 
 } 
 getch(); 
}