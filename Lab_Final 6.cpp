#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int l, r;
        scanf("%d %d", &l, &r);

        for (int num = l; num <= r; num++) {
            int prime = 1;

            if (num <= 1) {
                prime = 0;
            }

            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = 0;
                    break;
                }
            }

            if (prime) {
                printf("%d ", num);
            }
        }

        printf("\n");
    }

    return 0;
}
