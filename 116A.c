#include <stdio.h>
int main()
{
    int n, i, pas = 0, max = 0;
    scanf("%d", &n);
    int *peopleOut = (int*) malloc(n * sizeof(int));
    int *peopleIn = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &peopleOut[i], &peopleIn[i]);
    }
    for(i = 0; i < n; i++)
    {
        pas = pas - peopleOut[i] + peopleIn[i];
        if(pas > max) 
        {
            max = pas;
        }
    }
    printf("%d", max);
    return 0;
}