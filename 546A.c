#include <stdio.h>
int main()
{
    unsigned int k, w, n;
    unsigned int pay = 0;
    scanf("%u %u %u", &k, &w, &n);
    
    pay = k * (n + 1) * n / 2;
    if(pay > w)
    {
        pay -= w;
    }
    else 
    {
        pay = 0;
    }
    printf("%d", pay);
    return 0;
}