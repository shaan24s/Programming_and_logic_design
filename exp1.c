//Write a program to convert the temperature reading in fernheit to celsius and kelvin scale.//
#include<stdio.h>
int main() {
    float f,c,k;
    printf("enter the temperature in fernheit scale");
    scanf("%f",&f);
    c = (5*(f-32))/9;
    k = c+273;
    printf("ferenheit scale to celsius scale: %f",c);
    printf("\n fernheit scale to kelvin scale: %f",k);
    return 0;
}