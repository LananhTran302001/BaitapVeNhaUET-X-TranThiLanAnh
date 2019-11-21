#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long coins = 0;
    int result = 1;
    int count0 = 0;
    scanf("%d", &n);
    long *a = (long*) malloc(n * sizeof(long));
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
        if(a[i] > 0) 
        {
            coins = coins + a[i] - 1;
        }
        else if(a[i] < 0)
        {
            coins = coins + (- 1) - a[i];
            result *= (- 1);
        }
        else
        {
            count0++;
        }
        
    }

    if(count0 == 0 && result == - 1)
    {
        coins += 2;
    }
    else if(count0 > 0)
    {
        coins += count0;
    }
    printf("%ld", coins);

    return 0;
}
