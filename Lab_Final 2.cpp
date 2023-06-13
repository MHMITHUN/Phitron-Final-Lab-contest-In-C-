#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n], diff[n];
    int i, j, temp;

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (b[j] < b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", diff[i]);
    }

    return 0;
}
