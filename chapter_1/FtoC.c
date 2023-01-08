#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    float fah = LOWER;
    float celsius;
    while (fah <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fah - 32.0);
        printf("%4.0f %6.1f\n", fah, celsius);
        fah = fah + STEP;
    }

    // celsius = 0.0;
    for (fah = 0; fah <= UPPER; fah = fah + STEP)
    {
        printf(" %4.0f %6.1f \n", fah, (5.0 / 9.0) * (fah - 32));
    }
}