#include<stdio.h>
#include<stdlib.h>
int main(){
  int a,b;
  b=square();
  printf("\nThe square value is %d\t",b);
  return 0;
}
void square(){
int a;
printf("Enter The Number:\n");
scanf("%d",&a);
printf("Entered value of the number is\t: %d",a);
int b=a*a;
return b;
}
