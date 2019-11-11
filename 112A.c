#include<stdio.h>
#include<string.h>
int main()
{
    char line1[100], line2[100];
    int i, ans = 0;
    scanf(" %[^\n] ", &line1);
    scanf(" %[^\n] ", &line2);
    
    for(i = 0; i < strlen(line1); i++)
    {
        if('A' <= line1[i] && line1[i] <= 'Z') 
        {
            line1[i] += 32;
        }
        if('A' <= line2[i] && line2[i] <= 'Z') 
        {
            line2[i] += 32;
        }
    }

    for(i = 0; i < strlen(line1); i++)
    {
        if(line1[i] > line2[i])
        {
            ans++;
            break;
        }
        else if(line1[i] < line2[i])
        {
            ans--;
            break;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}