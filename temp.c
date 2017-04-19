#include<stdio.h>
#include<conio.h>
int main()
{
int n,temp,count=0;
printf("enter");
scanf("%d",&n);
temp=n;
while(temp!=0){

temp=temp/10;
++count;}
printf("number%d",count);
return 0;
}
