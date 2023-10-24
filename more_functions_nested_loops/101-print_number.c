#include <stdio.h>

void print_digit(int n) {
    if (n == 0) {
        _putchar('0');
    } else {
        while (n > 0) {
            int digit = n % 10;
            _putchar('0' + digit);
            n /= 10;
        }
    }
}
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    print_digit(n);
}
