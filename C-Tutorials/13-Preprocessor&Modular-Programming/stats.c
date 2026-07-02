#include "stats.h"

double average(const int *data, int count)
{
    int i;
    long sum = 0;

    if (count <= 0)
        return 0.0;

    for (i = 0; i < count; i++)
        sum += data[i];

    return (double)sum / count;
}
