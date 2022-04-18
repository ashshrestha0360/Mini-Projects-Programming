#include<stdio.h>
int main(){
    float principal, rate, time;
    printf("Enter the pricipal:\n");
    scanf("%f",principal);
    printf("Enter the rate:\n");
    scanf("%f",rate);
    printf("Enter the time:\n");
    scanf("%f",time);
    float simple_interest=(principal*rate*time)/100;
    printf("The Simple Interest is %f",simple_interest);
    return 0;
}