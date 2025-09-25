#include <stdio.h>

int main() 
{
   int radius;
   float area, circumference;
   float pi = 3.14159;

    printf("Enter radius of the circle: \n");
    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nArea of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circumference);
    return 0;
}

