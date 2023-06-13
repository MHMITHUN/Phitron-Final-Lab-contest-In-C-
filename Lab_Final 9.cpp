#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, count = 0, ar[1000];
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)  // Ensure i is not equal to j
                {
                    int a = ar[i];
                    int b = ar[j];
                    int gcd = 1;

                    for (int k = 2; k <= a && k <= b; k++)
                    {
                        if (a % k == 0 && b % k == 0)
                        {
                            gcd = 0;
                            break;
                        }
                    }

                    count += gcd;
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
