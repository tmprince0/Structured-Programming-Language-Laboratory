#include <stdio.h>

int main() {
    int num = 3, sum = 10, i = 7, j = 2;
    switch (num) {
        case 1:
            sum += ++i;
            break;
        case 2:
            sum += --j;
            break;
        case 3:
            sum -= --j;
        case 4:
            sum += i + j--;
    }
    printf("%d %d\n %d\n", sum, i, j);
    return 0;
}
