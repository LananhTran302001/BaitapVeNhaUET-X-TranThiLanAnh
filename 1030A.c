#include <stdio.h>
int main()
{
    int n, i, level[1000];
    int m = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &level[i]);
        m += level[i];
    }
    if(m == 0)
    {
        printf("EASY");
    }
    else
    {
    printf("HARD");
    }
    return 0;
}