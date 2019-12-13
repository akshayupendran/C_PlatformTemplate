#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int gcd(int a, int b)
{
    int retval;
    /* Sanitise input to API */
    if ((a <= 0) || (b <= 0))
    {
        retval = -1;
    }
    else
    {
        /* Implemenation follows */
        /* Step 1 : Check and reorganise arguments */
        if (a < b)
        {
            retval = gcd(b, a);
        }
        else if (a % b == 0)
        {
            retval = b;
        }
        else
        {
            retval = gcd(b, (a % b));
        }
    }

    return retval;
}
int main(int argc, char** argv)
{
    int retval = -1;
    int a, b;
    if (argc == 3)
    {
        a      = atoi(argv[1]);
        b      = atoi(argv[2]);
        retval = gcd(a, b);
        if (retval != -1)
        {
            printf("%d", retval);
            retval = 0;
        }
    }
    return retval;
}
