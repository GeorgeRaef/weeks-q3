#include <stdio.h>

int countOnes(int);
int main()
{
    int N, num, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &num);

        printf("%d\n", countOnes(num));
    }

    return 0;
}
int countOnes(int n)
{
    int count = 0;
    while (n > 0)
    {
        count += n % 2;
        n /= 2;
    }
    return count;
}