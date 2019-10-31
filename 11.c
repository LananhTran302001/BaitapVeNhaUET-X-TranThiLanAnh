#include <stdio.h>
int main()
{
    int cas, i;
    int m[100], n[100];
    int x1[100], y1[100], x2[100], y2[100]; /* where the lasers are initially pointed at */
    int movX[100], movY[100];
    
    scanf("%d", &cas);
    for(i = 0; i < cas; i ++)
    {
        scanf("%d %d %d %d %d %d", &n[i], &m[i], &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    for(i = 0; i < cas; i ++)
    {
        movX[i] = (x1[i] >= x2[i])? ((n[i] - x1[i]) - (1 - x2[i]) + 1) : (n[i] - x2[i] + x1[i]);
        movY[i] = (y1[i] >= y2[i])? ((m[i] - y1[i]) - (1 - y2[i]) + 1) : (m[i] - y2[i] + y1[i]);
        printf("movx = %d movY = %d\n", movX[i], movY[i]);
        printf("m = %d n = %d\n", m[i], n[i]);
        printf("%d\n", n[i] * m[i] - movX[i] * movY[i] * 2);
    }
    return 0;
}
