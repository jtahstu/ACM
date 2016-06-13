#include <stdio.h>
int main() {
	int x, y, movx, movy;
	while (scanf("%d%d%d%d", &x, &movx, &y, &movy) != EOF) {
		if ((x > y ? x - y : y - x) <= movx) {
			printf("Ciel\n");
		} else if (movx == movy) {
			printf("Draw\n");
		} else {
			if (movx > movy) {
				if (movx > 2 * movy) {
					printf("Ciel\n");
				} else {
					printf("Draw\n");
				}
			} else {
				if (movy > 2 * movx) {
					printf("Liss\n");
				+
			} else {
				printf("Draw\n");
			}
		}
	}
}
return 0;
}
