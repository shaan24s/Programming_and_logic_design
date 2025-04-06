//Write a program to compute the factorial of a number.
#include<stdio.h>
int main() {
    int n,i,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        fact*=i;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}
