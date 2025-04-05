//write a programme to compute the GCD and LCM of two numbers.
#include<stdio.h>
int main() {
    int a,b,gcd,lcm,prod;
    printf("enter greatest no.");
    scanf("%d",&a);
    printf("enter the largest no.");
    scanf("%d",&b);
    prod=a*b;
    while(a%b!=0){
        gcd=a%b;
        a=b;
        b=gcd;
    }
    lcm=prod/gcd;
    printf("%d\n%d",gcd,lcm);
    return 0;
}
