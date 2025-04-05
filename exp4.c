//write a program to check a 4 digit no. to be divisible by 9 or not without using modulas operator.
#include<stdio.h>
int main() {
    int n,sum=0;
    printf("enter the four digit number");
    scanf("%d",&n);
    while(n!=0) {
        sum+=n-((n/10)*10);
        n/=10;
    }
    printf("%d\n",sum);
    if(sum-((sum/9)*9)==0) {
        printf("the number is dibisible by 9");
    }
    else {
        printf("the number is not divisible by 9");
    }
    return 0;
}
