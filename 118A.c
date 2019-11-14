#include <stdio.h>
#include <math.h>
int main()
{
    int squareOfRec, perimeterOfRec, side;
    scanf("%d", &squareOfRec);
    int m = (int) sqrt((float) squareOfRec);
    
    for(side = m; side > 0; side--)
    {
        if(squareOfRec % side == 0)
        {
            perimeterOfRec = 2 * (side + squareOfRec / side);
            break;
        }
    }
    printf("%d", perimeterOfRec);

    return 0;
}