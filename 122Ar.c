#include <stdio.h>
int main()
{
    int n, m;
    int i = 0;
    scanf("%d", &n);
    if(n % 4 == 0 || n % 7 == 0)
    {
        printf("YES");
    }
    else
    {

        if(n % 47 == 0 || n % 74 == 0)
        {
            printf("YES");
        }
        else
        {

            if(n % 447 == 0 || n % 477 == 0)
            {
                printf("YES");
            }
            else
            {

                if(n % 474 == 0)
                {
                    printf("YES");
                }
                else
                {

                    if(n % 747 == 0 || n % 774 == 0)
                    {
                        printf("YES");
                    }
                    else
                    {

                        printf("NO");
                    }
                }
            }
        }
    }
    return 0;
}
    
    
    
    