#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int x = 3, y = 5;
    printf("Hello from test branch!\n");
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}
// test