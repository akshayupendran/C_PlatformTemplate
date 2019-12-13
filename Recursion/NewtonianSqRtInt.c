#include <stdio.h>
#include <stdlib.h>

int SqrtInt(int a, int x);

int SqrtInt(int a, int x)
{
    int retval;
    int x1;
    /* Sanitise input to API */
    if (a <= 0)
    {
        retval = -1;
    }
    else
    {
        /* Step 1 : Initialise random guess x */
        if(x == 0)
        {
          x1=(rand() % (a/2));
        }
        else
        {
          /* Step 2: This is not the first entry -> calcute x1 and compare with x */
          x1 = ((x+(a/x))/2);
        }

        if(x1 == x)
        {
          retval = x;
        }
        else
        {
          retval = SqrtInt(a, x1);
        }
      }

    return retval;
}
int main(int argc, char** argv)
{
    int retval = -1;
    int a;
    if (argc == 2)
    {
        a      = atoi(argv[1]);
#ifdef DEBUG_ENABLED
        printf(""
        retval = SqrtInt(a, 0);
        if (retval != -1)
        {
            printf("%d", retval);
            retval = 0;
        }
    }
    return retval;
}
