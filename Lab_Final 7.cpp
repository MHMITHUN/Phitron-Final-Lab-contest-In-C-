#include <stdio.h>

int main() {
    int t, i, n, s;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d", &n);
        int arr[n];
        int j;

        for (j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        scanf("%d", &s);

        int pos = -1;
        for (j = 0; j < n; j++) {
            if (arr[j] == s) {
                pos = j + 1;
                break;
            }
        }

        if (pos == -1) {
            printf("Case %d: Not Found\n", i);
        } else {
            printf("Case %d: %d\n", i, pos);
        }
    }

    return 0;
}
