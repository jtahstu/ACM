/**
简单井字棋，提供两种级别对战，如果需要先手，请输入yes
难度请选择0或1，如果战胜难度为1 的（有一定智能）欢迎截图获得小奖励。
轮到自己输入请输入坐标欢迎对战
*/
#include <stdio.h>
#define COMPUTER_FIRST 0
#define USER_FIRST 1
#define BLANK 0
#define USER 1
#define COMPUTER 2
#define EASY 0
#define HARD 1
int B[3][3],x, y,level,turn;
char choice[10];
int ok(x, y) {
    return x <= 3 && x >= 1 && y <= 3 && y >= 1 && B[x - 1][y - 1] == BLANK;
}
void printBoard() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (B[i][j] == USER)
                printf("  X  ");
            else if (B[i][j] == COMPUTER)
                printf("  O  ");
            else
                printf("<%d,%d>", i + 1, j + 1);
            if (j < 2)
                putchar('|');
        }
        if (i < 2)
            puts("\n---------------");
        else
            puts("");
    }
}
int line(int a, int b, int c) {
    if (a == BLANK || b == BLANK || c == BLANK)
        return 0;
    return a == b && b == c;
}
int win() {
    int i;
    for (i = 0; i < 3; i++)
        if (line(B[i][0], B[i][1], B[i][2]))
            return 1;
    for (i = 0; i < 3; i++)
        if (line(B[0][i], B[1][i], B[2][i]))
            return 1;
    return line(B[0][0], B[1][1], B[2][2]) || line(B[0][2], B[1][1], B[2][0]);
}
int value(int x, int y) {
    if (!ok(x, y))
        return  - 9999;
    int copy = B[x - 1][y - 1];
    B[x - 1][y - 1] = COMPUTER;
    if (win()) {
        B[x - 1][y - 1] = copy;
        return 100000;
    }
    B[x - 1][y - 1] = copy;
    copy = B[x - 1][y - 1];
    B[x - 1][y - 1] = USER;
    if (win()) {
        B[x - 1][y - 1] = copy;
        return 10000;
    }
    B[x - 1][y - 1] = copy;
    int s = 10;
    if (x == y || x + y == 4)
        s += 20;
    if (x == 2 && y == 2)
        s += 50;
    return s + rand() % 40;
}
void randSearch() {
    do {
        x = (rand() % 3+1);
        y = (rand() % 3+1);
    } while (!ok(x, y));
    B[x - 1][y - 1] = COMPUTER;
    printf("The computer put at pos(%d,%d),your turn please...\n", x, y);
    printBoard();
}
void greedySearch() {
    int bestX = 1, bestY = 1, max = value(bestX, bestY);
    int i, j;
    for (i = 1; i <= 3; i++)
        for (j = 1; j <= 3; j++) {
            if (ok(i, j) && value(i, j) > max) {
                bestX = i;
                bestY = j;
                max = value(bestX, bestY);
            }
        }
    printf("%d %d\n", bestX, bestY);
    x = bestX, y = bestY;
    B[x - 1][y - 1] = COMPUTER;
    printf("The computer put at pos(%d,%d),your turn please...\n", x, y);
    printBoard();
}
void start() {
    memset(B[0], 0, 36);
    puts("Please choice put firstly or not?(Y/N)");
    scanf("%s", choice);
    if (choice[0] == 'Y' || choice[0] == 'y')
        turn = USER_FIRST;
    else
        turn = COMPUTER_FIRST;
    puts("Please choice level: easy(0) or hard(1)");
    do {
        scanf("%d", &level);
    } while (level >= 2 || level < 0);
}
void game() {
    int i;
    for (i = 0; i < 9; i++) {
        if (turn == USER_FIRST) {
            do {
                puts("Please input the postion you want to put(x,y)");
                scanf("%d %d", &x, &y);
            } while (!ok(x, y));
            B[x - 1][y - 1] = USER;
            printBoard() ;
            if (win()) {
                puts("Congratulations!,you win!");
                return ;
            }
            turn = COMPUTER_FIRST;
        } else {
            if (level == EASY)
                randSearch();
            else
                greedySearch();
            if (win()) {
                puts("Sorry, you lose!");
                return ;
            }
            turn = USER_FIRST;
        }
    }
}
int main() {
    start();
    game();
    return 0;
}
