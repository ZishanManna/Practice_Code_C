#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
printf("Enter the month number:\n");
scanf("%d",&n);
printf("Entered number is :\t %d \n",n);
printf("This month has :\t");
switch (n){
case 1:printf("31 days");break;
case 2:printf("28 or 29 days");break;
case 3:printf("31 days");break;
case 4:printf("30 days");break;
case 5:printf("31 days");break;
case 6:printf("30 days");break;
case 7:printf("31 days");break;
case 8:printf("31 days");break;
case 9:printf("30 days");break;
case 10:printf("31 days");break;
case 11:printf("30 days");break;
case 12:printf("31 days");break;
default: printf("Incorrect Number ");
}
}
