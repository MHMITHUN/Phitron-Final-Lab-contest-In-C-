#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf((n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) ? "Yes" : "No");
    return 0;
}
