/**
 * binary_to_uint - convert binary to unsigned int
 *
 * @b:char to be  converted
 *Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int n;

    n = 0;
    if (!b)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[2] != '0' && b[2] != '1')
            return (0);
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        n <<= 1;
        if (b[i] == '1')
            n += 1;
    }
    return (n);
}