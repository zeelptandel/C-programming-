#include<stdio.h>
int factorial(int a){
int result = 1;
for(int i=1 ; i<=a ; i++){
result *= i;
}
return result ;
}
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
if (a==0){
        printf("1");
    } else if(a<0){
        printf("0");
    } else{
        printf("factorial of %d is: %d", a,factorial(a));
    }

    return 0;
}
