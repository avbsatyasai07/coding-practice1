#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[100005];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int count = 0;
        int i = 0;

        while (i <= n - k) {
            int ok = 1;
            for (int j = 0; j < k; j++) {
                if (a[i + j] != 0) {
                    ok = 0;
                    break;
                }
            }

            if (ok) {
                count++;
                i += k + 1;
            } else {
                i++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

