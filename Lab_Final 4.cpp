#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        int num = arr[i];
        int digit;
        
        while (num != 0)
        {
            digit = num % 10;
            printf("%c", digit + 64);
            num /= 10;
        }
        
        printf("\n");
    }
    
    return 0;
}
