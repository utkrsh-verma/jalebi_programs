#include <stdio.h>

int main() 
{
    
    float celsius, fahrenheit;

   printf("Enter the temperature in Centigrade: ");
   scanf("%f", &celsius);
   
   fahrenheit = (celsius * 9 / 5) + 32;
   printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
   return 0;
   
}
