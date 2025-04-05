//A student has secured marks in 5 subject(out of 100). write a program to compute the aggregate and if the marks is greater or equal to 80% then print "exellent" else print "average".
#include<stdio.h>
int main() {
    int i,n,sum,avg;
    for(i=0;i<=4;i++) {
        printf("enter the marks of your subject (out of 100):");
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/5;
    if(avg>80) {
        printf("excellent");
    }
    else {
        printf("average");
    }
    return 0;
}
