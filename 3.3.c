#include <stdio.h>

void findPrimeNumbers()
{
    for (int i = 1000; i > 0; i--)
    {
        int isPrime = 1;

        for (int j = i - 1; j > 1; j--)
        {
            int remain = i % j;
            if (remain == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    findPrimeNumbers();
}