#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a==b)
    {
        printf("Both numbers are equal.\n");
    }
    else
    {
        printf("The numbers are not equal.\n");
    }
}