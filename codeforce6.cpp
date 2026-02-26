#include <stdio.h>

#define MAXN 200005

int color[MAXN];
int head[MAXN], to[MAXN * 2], cost[MAXN * 2], nxt[MAXN * 2];
int edge_cnt;

void add_edge(int u, int v, int c) {
    to[edge_cnt] = v;
    cost[edge_cnt] = c;
    nxt[edge_cnt] = head[u];
    head[u] = edge_cnt++;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, q;
        scanf("%d %d", &n, &q);

        for (int i = 1; i <= n; i++) {
            scanf("%d", &color[i]);
            head[i] = -1;
        }

        edge_cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            int u, v, c;
            scanf("%d %d %d", &u, &v, &c);
            add_edge(u, v, c);
            add_edge(v, u, c);
        }

        long long total_cost = 0;
        for (int u = 1; u <= n; u++) {
            for (int e = head[u]; e != -1; e = nxt[e]) {
                int v = to[e];
                if (u < v && color[u] != color[v]) {
                    total_cost += cost[e];
                }
            }
        }

        for (int i = 0; i < q; i++) {
            int v, x;
            scanf("%d %d", &v, &x);

            for (int e = head[v]; e != -1; e = nxt[e]) {
                int u = to[e];
                if (color[v] != color[u]) {
                    total_cost -= cost[e];
                }
            }

            color[v] = x;

            for (int e = head[v]; e != -1; e = nxt[e]) {
                int u = to[e];
                if (color[v] != color[u]) {
                    total_cost += cost[e];
                }
            }

            printf("%lld\n", total_cost);
        }
    }

    return 0;
}

