#include <stdio.h>

int main()
{
    int number;
    int i;
    int sum = 0;
    int digit, fact;
    scanf("%d", &number);
    int temp = number;
    while (temp != 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        temp /= 10;
        sum += fact;
    }
    if (sum == number) {
        printf("%d is a Strong Number",number);
    } else {
        printf("%d is not a Strong Number",number);
    }

}
