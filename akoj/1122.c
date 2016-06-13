#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[])
{
    int n, i, j;
    char a[10];
    for(n = 123; n < 330; n++){
        sprintf(a, "%d", n * 1000000 + n * 2 * 1000 + n * 3);
        for(j = 0, i = '1'; i <= '9'; memchr(a, i++, 9) && j++);
        if (j == 9) {
            printf("%d %d %d \n", n, n * 2, n * 3);
        }
    }
return 0;
}
