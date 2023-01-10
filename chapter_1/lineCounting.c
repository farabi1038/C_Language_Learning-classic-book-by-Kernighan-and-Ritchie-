#include <stdio.h>
main()
{

    int c, n1;
    n1 = 0;

    // line counting
    while (c == getchar() != EOF)
    {
        if (c == '\n')

        {
            ++n1;
        }
    }
    printf("%d \n", n1);
}