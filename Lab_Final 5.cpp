#include <stdio.h>
int main()
{
    double num1;
    double num2;
    double res;

    scanf("%lf %lf", &num1,&num2);
    
    res = (num2 - num1) / 2.0;
    
    printf("%.0lf\n", res);
    
    return 0;
}
