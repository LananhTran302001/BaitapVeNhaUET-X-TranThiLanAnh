#include <stdio.h>
#include <string.h>
int main()
{
    char line[101]; 
    scanf("%[^\n]", &line); 

    int i, m = 0;
    
    /* characters must be in [33, 126] */
    for(i = 0; i < strlen(line); i++)
    {
        if('!' <= line[i]  && line[i] <= '~')
        {
        }
        else
        {
            m++;
            printf("NO");
            break;
        }
    }
    
    if(m == 0)
    {
        for(i = 0; i < strlen(line); i++)
        {
            if(line[i] == 'H' || line[i] == 'Q' || line[i] == '9')
            {
                m++;
                printf("YES");
                break;
            }
        }
        if(m == 0) printf("NO");
    }

    return 0;
}