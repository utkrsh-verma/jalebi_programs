#include <stdio.h>
#include <math.h>

int main() 
{
    float principal, rate, time, simple_interest, compound_interest, amount;

    
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time in years: ");
    scanf("%f", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    amount = principal * pow((1 + (rate / 100)), time);
    
    compound_interest = amount - principal;

    
    printf("Simple Interest = %f\n", simple_interest);
    printf("Compound Interest = %f\n", compound_interest);

    return 0;
}