#include <stdio.h>

main()
{

    long nc = 0;

    while (getchar() != EOF)
    {
        +nc;
    }
    printf(" %d \n", nc);

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f \n", nc);
}
