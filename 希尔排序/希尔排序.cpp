// 希尔排序.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<stdio.h> 
void shellsort(int r[],int n) 
{int i,j,d,x; 
d=n/2; 
while(d>0) 
{ for(i=d+1;i<n;i++) 
{j=i-d; 
while(j>0) 
if(r[j]>r[j+d]) 
{x=r[j];r[j]=r[j+d];r[j+d]=x; 
j=j-d; 
} 
else j=0; 
} 
d=d/2; 
} 
} 
void main() 
{ 
int i; 
int a[11]={65,25,15,95,31,85,79,48,43,46,74}; 
shellsort(a,11); 
for(i=1;i<11;i++) 
printf("%d\n",a[i]); 
int b=0;
scanf("%d",b);
}

