#include <stdio.h>
int main() {
    float x, y;
    while (scanf("%f%f", &x, &y) != EOF) {
        if (x == 0 && y != 0) printf("%.2f\n", y);
        else if (y == 0 && x != 0 || x == 0 && y == 0) printf("0.00");
        else printf("%.2f\n", (x * y) / (x + y));
    }
}
