#include<stdio.h>
int main(){
    int arr[100];
    int n , i;
    int min , max ;

    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the numbers :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1;i<n;i++){
    if(arr[i]<min)
    min = arr[i];
    }
    printf("The minimum value is %d\n",min);


    max=arr[0];
    for(i=1;i<n;i++){
    if(arr[i]>max)
    max = arr[i];
    }
    printf("The maximum value is %d\n",max);


return 0;
}
