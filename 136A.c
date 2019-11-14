#include <stdio.h>
int main()
{
    int iGiveTo[101], numOfFriend;
    int i, j;
    scanf("%d", &numOfFriend);
    for(i = 0; i < numOfFriend; i++)
    {
        scanf("%d", &iGiveTo[i]);    /* i-th number gives gift to (iGiveTo[i] - 1)-th number */
    }
    for(i = 0; i < numOfFriend; i++) 
    {
        for(j = 0; j < numOfFriend; j++)
        {                             /* receiver : iGiveTo[j] - 1 = 0, 1, 2,... = i */
            if(i == iGiveTo[j] - 1)   /* (iGiveTo[j] - 1)-th number gets gift from j-th number  */ 
            {
                printf("%d ", j + 1); /* find the one j gives gift to the i-th friend */
            }
        }
    }
    return 0;
}