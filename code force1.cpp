#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        int digits_x[10] = {0};
        int temp = x;
        while (temp > 0) {
            digits_x[temp % 10] = 1;
            temp /= 10;
        }

        int y = 0;
        while (1) {
            int temp_y = y;
            if (y == 0 && digits_x[0]) {
                break;
            }

            int found = 0;
            while (temp_y > 0) {
                int d = temp_y % 10;
                if (digits_x[d]) {
                    found = 1;
                    break;
                }
                temp_y /= 10;
            }

            if (found) break;
            y++;
        }

        printf("%d\n", y);
    }

    return 0;
}

