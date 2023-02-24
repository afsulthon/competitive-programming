#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    int newNumber = 0;
    while (number > 0)
    {
        newNumber = newNumber * 10 + number % 10;
        number /= 10;
    }
    printf("%d\n", newNumber);
    return 0;
}