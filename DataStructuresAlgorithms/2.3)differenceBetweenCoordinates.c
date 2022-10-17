
#include<stdio.h>
#include<math.h>

int main()
{

    int x1, y1, x2, y2, x, y;
    double result;

    printf("1st co-ordinate x1 and y1 is ");
    scanf("%d %d", &x1, &y1);

    printf("2st co-ordinate x2 and y2 is ");
    scanf("%d %d", &x2, &y2);


   result = sqrt( sqrt( fabs(x1-x2) )  + sqrt( fabs(y1-y2) ) );

    printf("Distance Between two co-ordinate: %lf \n", result);
    return 0;
}



