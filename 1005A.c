#include <stdio.h>

int main()
{
    int num, say[1001], step = 0;
    scanf("%d", &num);

    int i;
    for(i = 0; i < num; i++)
    {
        scanf("%d", &say[i]);
        if(say[i] == 1)
        {
            step ++;
        }
    }
    printf("%d\n", step);

    for(i = 0; i < num - 1; i++)
    {
        if(say[i] >= say[i + 1])
        {
            printf("%d ", say[i]);
        }
    }
    printf("%d ", say[num - 1]);

    return 0;
}