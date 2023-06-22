#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int a = 1;
    int b = 2;

    printf("%d, %d", a, b);

    for (int i = 3; i <= n; ++i) {
        int next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    }

    printf("\n");
}

int main() {
    print_fibonacci_sequence(98);

    return 0;
}

