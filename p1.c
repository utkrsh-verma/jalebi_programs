#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int sum;
    float percent;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    sum = m1 + m2 + m3 + m4 + m5;
    printf("Sum: %d\n", sum);
    
    percent = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Percentage: %f\n", percent);    
    return 0;
}
