#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num < 1)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int number = 17;

    if (isPrime(number))
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);

    return 0;
}
