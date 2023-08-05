#include<stdio.h>
#include<stdlib.h>
int main(){
char a[100];
int temp=0,i;
printf("Enter the string:\n");
scanf("%s",a);
printf("Entered string is: %s",a);
for(i=0;i<strlen(a);i++){
    if(a[i]>='a'&&a[i]<='z')
        temp+=1;
}
printf("\ncount number:%d\n",temp);
}
