#include <stdio.h>
#include <stdlib.h>

void SeivePrime(long long int  n)
{
     long long int  prime[100000] = {0};

    for (long long int  i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (long long int  j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (long long int  i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            printf("%ld ", i);
        }
    }
    printf("\n");
}

int main()
{
    long long int  n;
    scanf("%ld", &n);
    SeivePrime(n);

    return 0;
}