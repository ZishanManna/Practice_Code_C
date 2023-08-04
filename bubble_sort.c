#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n){
int i,j;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if (a[j]>a[j+1]){
            int temp =a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
      }
   }
   printf("\nThe sorted numbers are:\n");
   for(i=0;i<n;i++){
    printf("\t%d\t",a[i]);
   }
}
int main(){
int i,a[100],n;
printf("Enter the numbers in an array:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++){
        scanf("%d",&a[i]);

}
    printf("Entered elements are:\n");
    for(i=0;i<n;i++){
        printf("\t%d\t",a[i]);
    }
    bubble_sort(a,n);
}
