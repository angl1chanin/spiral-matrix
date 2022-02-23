#include "stdio.h"

int main () {
    int a, b, k = 1;
    scanf("%d%d", &a, &b);
    int mas[a][b];
    // a - количество строк
    // b - количество столбцов
    int s = 0, c = 0;
    int x = 0, y = 0;
    int i = 0, j = 0;
    if (a == 1 || b == 1) {
        if (b == 1) {
            for (int i = 1; i <= a; i++) {
                printf("%3d\n", i);
            }
        } else {
            for (int i = 1; i <= b; i++) {
                printf("%3d", i);
            }
        }
        return 0;
    }
    while (k <= a*b && s != a) {

        // идем вправо
        for (x; x < (b - i); x++) {
            mas[y][x] = k;
            k += 1;
        }
        x -= 1;
        y += 1;
        s += 1;

        // идем вниз
        for (y; y < (a - j); y++) {
            mas[y][x] = k;
            k += 1;
        }
        x -= 1;
        y -= 1;
        c += 1;
        if (c == b) {
            break;
        }

        // идем справа налево
        for (x; x >= i && s != a; x--) {
            mas[y][x] = k;
            k += 1;
        }
        s += 1;
        y -= 1;
        x += 1;

        // идем снизу вверх
        for (y; y > j; y--) {
            mas[y][x] = k;
            k += 1;
        }
        x += 1;
        y += 1;
        i += 1;
        j += 1;
        c += 1;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%6d", mas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
