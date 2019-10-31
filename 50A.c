#include <stdio.h>
int main()
{
    int m, n;
    int result;
    scanf("%d %d", &m, &n);
    if(m * n % 2 == 0)
    {
        result = m * n / 2;
    }
    else
    {
        if ((m - 1) * (n - 1) == 0)
        {
            result = m * n / 2;
        }
        else
        {
            result = (n * (m - 1)) /2 + n / 2;
        }
        
    }
    printf("%d", result);
    return 0;    
}