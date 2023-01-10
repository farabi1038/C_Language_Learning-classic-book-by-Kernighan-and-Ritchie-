#include <stdio.h>
#define YES 1
#define NO 0

main()
{
    int c;
    int nw_counter = 0;

    int word_counter = 0;

    int next_line_counter = 0;
    while (c = getchar() != EOF)
    {
        if (c == '\n')
        {
            ++next_line_counter;
        }
        if (c == '\n' || c == ' ' || c == '\t')
        {
            ++nw_counter;
        }
        else
        {
            ++word_counter;
        }
    }
    printf(" %d %d %d", word_counter, nw_counter, next_line_counter);
}