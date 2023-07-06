#include <stdio.h>

void collatz_conjecture(int n) {
    printf("%d ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
        printf("%d ", n);
    }
}

int main() {
    int number;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &number);
    collatz_conjecture(number);
    return 0;
}