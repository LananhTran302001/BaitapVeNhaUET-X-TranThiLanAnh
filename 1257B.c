#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *x = (int*) malloc(n * sizeof(int));
    int *y = (int*) malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(x[i] > y[i]) 
        {
            printf("YES\n");
        }

        else if(x[i] == y[i]) 
        {
            printf("YES\n");
        }

        else
        {
            if(x[i] < 4)
            {
                if(x[i] == 2 && y[i] == 3)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");  
                }
            }
            else
            {
                printf("YES\n");
            }   
        }
    }
    
    return 0;
}