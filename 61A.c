#include <stdio.h>
#include <string.h>
int main()
{
    char line1[1000], line2[1000], line3[1000];
    scanf("%[^\n]\n", &line1);
    scanf("%[^\n]\n", &line2);
    int i;
    for(i = 0; i < strlen(line1); i++)
    {
        if(line1[i] == line2[i])
        {
             line3[i] = '0';
        }
        else
        {
            line3[i] = '1';
        }
        
    }

    line3[strlen(line1)] = '\0';
    puts(line3);
    return 0;
}