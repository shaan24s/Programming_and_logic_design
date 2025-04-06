//write a c program to print the fibonacci series of length   10.
#include<stdio.h>
int main() {
    int a=0,b=1,n,i=0,next=0;
    printf("enter the series length");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i==0){
            printf("%d\n",a);
        }
        else if(i==1){
            printf("%d\n",b);
        }
        else{
            next=a+b;
            printf("%d\n",next);
            a=b;
            b=next;
        }
    }
    return 0;
}
