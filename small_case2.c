#include<stdio.h>
#include<stdlib.h>
int main(){
char a[100];
printf("Enter the string:\n");
scanf("%s",a);
printf("Entered string is:\t %s",a);
for(int i=0;i<strlen(a);i++){
        if(a[i]>='A'&&a[i]<='Z'){
    a[i]=a[i]+32;
        }
}
printf("\nSmall case string is:\t %s",a);
}
