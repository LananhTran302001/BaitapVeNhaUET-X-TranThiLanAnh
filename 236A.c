#include <stdio.h>
#include <string.h>

int main()
{
    char name[1000];
    scanf("%[^\n]", name);

    int count = 0;
    int i, j;
    for(i = 0; i < strlen(name) - 1; i++)
    {
        for(j = i + 1; j < strlen(name); j++)
        {
            if(name[i] > name[j])
            {
                char temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    for(i = 1; i < strlen(name); i++)
    {
        if(name[i] != name[i - 1])
        {
            count++;
        }
    }

    if(count % 2 == 0) 
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }
    
    return 0;
}