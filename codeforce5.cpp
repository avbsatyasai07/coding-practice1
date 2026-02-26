#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long p[100005], s[100005];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &p[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%lld", &s[i]);
        }

        long long target = gcd(p[n - 1], s[0]);
        int ok = 1;

        for (int i = 0; i < n; i++) {
            if (gcd(p[i], s[i]) != target) {
                ok = 0;
                break;
            }
        }

        if (ok) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

