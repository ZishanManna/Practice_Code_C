#include<stdio.h>
#include<stdlib.h>
int main(){
int m,n,i;
printf("Enter the number's table you want:\n");
scanf("%d",&n);
printf("\n");
for (i=1;i<=10;i++){
    m=i*n;
    printf("%d\n",m);
}
}
