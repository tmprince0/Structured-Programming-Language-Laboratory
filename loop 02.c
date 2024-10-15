#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d", 2 * i - 1);
        if (i != N) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
