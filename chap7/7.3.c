/***********************************
 *Computer Programming: Part-1
 *Chapter 7: Function
 *Example: 7.3
 *Author: Md Akil Mahmod Tipu
 *Email: amtipu.bb@gmail.com
 
 ***********************************/
#include <stdio.h>

double add( double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}

int main()
{
    double a, b, c;
    a = 2.8;
    b = 2.7;
    c = add(a, b);
    printf("%lf\n", c);

    return 0;
}