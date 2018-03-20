
/***********************************
 *Computer Programming: Part-1
 *Chapter 10: Prime Number
  *Example: 10.1
 *Author: Md Akil Mahmod Tipu
 * www.akiltipu.com
 
 ***********************************/
#include <stdio.h>

int is_prime (int n)
{
    int i;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;

    while(1)
    {
        printf("Please enter the number (enter 0 to exit): ");

        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }
        if(1 == is_prime(n))
        {
            printf("%d is a prime number. \n", n);
        }
        else 
        {
            printf("%d is not a prime number. \n", n);
        }
    }

    return 0;
}
