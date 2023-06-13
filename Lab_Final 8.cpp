#include <stdio.h>
#include <string.h>
#define SIZE 26
int main()
{
    int n;
    scanf("%d\n", &n);
    
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &arr[i]);
    }
    
    int freq[SIZE] = {0};
    
    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (freq[i] == 1)
        {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}
