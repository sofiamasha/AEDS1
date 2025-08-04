#include <stdio.h>

int fat(int n) {
    return n <= 1 ? 1 : n * fat(n-1);
}

int main() {
    int num;
    while(1) {
        scanf("%d", &num);
        if(num == 0) break;

        int t = 0;
        int pos = 1;
        int temp = num;
        int tam = 0;
        while(temp > 0) {
            temp /= 10;
            tam++;
        }

        temp = num;
        while(temp > 0) {
            int d = temp % 10;
            t += d * fat(pos);
            temp /= 10;
            pos++;
        }

        printf("%d\n", t);
    }
    return 0;
}
