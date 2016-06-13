#include <stdio.h>
int judge(int n)
{
    while (n)
    {
        if (n % 10 == 4)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(void)
{
    int n, i;
    int arr[50001] = {0};

    for (i = 1; i < 50001; i++)
        arr[i] = arr[i - 1] + judge(i);
    while (scanf("%d", &n) != EOF)
        printf("%d\n", arr[n]);
    return 0;
}
