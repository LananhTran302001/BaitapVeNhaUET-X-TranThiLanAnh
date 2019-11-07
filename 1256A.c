#include <stdio.h>
 
int main()
{
    int tests, i, boo[10002];
    unsigned int sum[10002], nValue[10002], numOfN[10002], numOf1[10002];
    scanf("%d", &tests);
 
    for(i = 0; i < tests; i++)
    {
        scanf("%u %u %u %u", &numOfN[i], &numOf1[i], &nValue[i], &sum[i]);
        if((numOfN[i] * nValue[i] + numOf1[i]) < sum[i])
        {
            boo[i] = 1;
        }
        else
        {
            if((sum[i] % nValue[i]) <= numOf1[i])
            {
                boo[i] = 0;
            }
            else
            {
                boo[i] = 1;
            }
        }
    }
    for(i = 0; i < tests; i++)
    {
        if(boo[i] == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
