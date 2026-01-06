#include<stdio.h>
int main() {
char arr[100];
int i,n;
printf("Enter the number of characters : ");
scanf("%d",&n);

printf("Enter %d elements\n" ,n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
return 0;
}
