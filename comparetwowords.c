#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    int n,i=0,j=0;
char a[50],b[50];
printf("Enter the first word:\n ");
scanf("%s",a);
printf("Enter the second word:\n ");
scanf("%s",b);
printf("The first word is:\n ");
printf("%s\n",a);
printf("The second word is:\n ");
printf("%s\n",b);

while(a[i]!='\0'){
    i++;
}
while(b[j]!='\0'){
    j++;
}

printf("Length of the string a is %d:\n",i);
printf("Length of the string b is %d:\n",j);

if(i!=j){
    printf("The two words are different\n");
    exit(0);
}


for(int k=0;k<i;k++){
        a[k]= tolower(a[k]);
        b[k]= tolower(b[k]);
    if(a[k]==b[k]){
        printf("The two words are same\n");
        break;
    }
    else{
        printf("The two words are different\n");
        break;
    }
}
return 0;
}
