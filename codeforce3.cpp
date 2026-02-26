#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int h[100005];
        for (int i = 0; i < n; i++) {
            scanf("%d", &h[i]);
        }

        int max_h = h[0];
        for (int i = 1; i < n; i++) {
            if (h[i] > max_h) {
                max_h = h[i];
            }
        }

        int time = 0;
        int cur = k - 1;
        int ok = 0;

        while (1) {
            if (h[cur] == max_h) {
                ok = 1;
                break;
            }

            int next = -1;
            for (int i = 0; i < n; i++) {
                if (h[i] > h[cur]) {
                    int cost = h[i] - h[cur];
                    if (time + cost < h[cur]) {
                        next = i;
                        time += cost;
                        break;
                    }
                }
            }

            if (next == -1) {
                break;
            }

            cur = next;
        }

        if (ok) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

