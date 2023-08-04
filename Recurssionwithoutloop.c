#include<stdio.h>
#include<stdlib.h>
int main(){
int i,n,m=1,table;
printf("Enter the number for it's multiplication table:\n");
scanf("%d",&n);
printf("Enter the number upto which multiplication table is needed:\n");
scanf("%d",&i);
main: if(m<=i){
    table=n*m;
    m++;
    printf("%d\n",table);
    goto main;}
    return 0;
}

