#include <stdio.h>

int main() {
    int a, b, c;
    int start_time;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    start_time = c - (a + b);

    printf("%d\n", start_time);

    return 0;
}