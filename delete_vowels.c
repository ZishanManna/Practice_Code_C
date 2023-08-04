#include<stdio.h>
#include<stdlib.h>
int main(){
char n[50],i,m,j;

printf("Entered the length of the Word:\n");
scanf("%d",&m);

printf("Word:\n");
scanf("%s",n);

printf("Word is:\t %s\n",n);

for(i=0;i<m;i++){
    if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='0'||n[i]=='U'){
        n[i]='\0';
    }

}
 printf("Word without Vowel is\n");
 for(i=0;i<m;i++){
    printf("%c",n[i]);
}
}
