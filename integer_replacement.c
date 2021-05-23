
#include <stdio.h>

int integerReplacement(int n)
{
    int i = 0;

    while (n != 1) {
    if (n % 2 == 0) {
        n = n/2;
        i++;
    }
    else 
        n++;
    }
    printf("%d", i);
}

int main ()
{
    int n = 8;
    return(integerReplacement(n));
}