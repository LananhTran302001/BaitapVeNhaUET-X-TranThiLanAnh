#include <stdio.h>
int devide(int a, int b);
int main()
{
    int people, pages, notebooks, noteRed, noteGreen, noteBlue;
    scanf("%d %d", &people, &pages);
    noteRed = devide(people * 2, pages);
    noteGreen = devide(people * 5, pages);
    noteBlue = devide(people * 8, pages);
    notebooks = noteRed + noteGreen + noteBlue;
    printf("%d", notebooks);
    return 0;
}
int devide(int a, int b)
{
    if(a % b == 0) 
    {
        a = a / b;
    }
    else
    {
        a = a / b + 1;
    }
    return a;
}