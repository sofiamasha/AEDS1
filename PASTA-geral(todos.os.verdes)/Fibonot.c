#include <stdio.h>

#define MAX 200000

int main() {
    int K;
    scanf("%d", &K);


    char is_fibo[MAX] = {0};


    int a = 1, b = 1;
    while (a < MAX) {
        is_fibo[a] = 1;
        int temp = a + b;
        a = b;
        b = temp;
    }


    int count = 0;
    for (int i = 1; i < MAX; i++) {
        if (!is_fibo[i]) {
            count++;
            if (count == K) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
