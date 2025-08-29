#include<stdio.h>
int main()
{
int n;
int sum =0;
printf("Enter a natural number : ",n);
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum = sum + i;
}

printf("The sum of first %d natural numbers is : %d\n",n,sum);
return 0;
}
