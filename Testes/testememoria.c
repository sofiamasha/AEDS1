#include <stdio.h>

int main() {
    int m = 10, n = 5, o = 2, p = 7;

    m /= o;
    n += m * p;
    o = 44 % 3;
    p = m + n - o;
    m = p * 2 - n;

    printf("%d %d %d %d", m, n, o, p);
    return 0;
}

