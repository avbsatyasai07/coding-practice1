#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);

        long long l[100005], r[100005], real[100005];
        int used[100005] = {0};

        for (int i = 0; i < n; i++) {
            scanf("%lld %lld %lld", &l[i], &r[i], &real[i]);
            used[i] = 0;
        }

        int changed = 1;
        while (changed) {
            changed = 0;
            long long best = k;
            int idx = -1;

            for (int i = 0; i < n; i++) {
                if (!used[i] && l[i] <= k && k <= r[i]) {
                    if (real[i] > best) {
                        best = real[i];
                        idx = i;
                    }
                }
            }

            if (idx != -1) {
                k = best;
                used[idx] = 1;
                changed = 1;
            }
        }

        printf("%lld\n", k);
    }

    return 0;
}

