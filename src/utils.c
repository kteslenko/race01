#include "../inc/header.h"

int ctod(char ch) {
    if (ch >= '0' && ch <= '9')
        return ch - '0';
    if (ch == '?')
        return 0;
    return -1;
}

bool matches(int number, const char *pattern) {
    int len = mx_strlen(pattern);

    for (int i = len - 1; i >= 0; i--) {
        if (pattern[i] != '?' && number % 10 != ctod(pattern[i])) {
            return false;
        }
        number /= 10;
    }

    return true;
}

int ipow(int n, unsigned int pow) {
    int result = 1;

    for (unsigned int i = 0; i < pow; i++) {
        result *= n;
    }

    return result;
}