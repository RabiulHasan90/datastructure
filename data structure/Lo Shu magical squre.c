#include <stdio.h>
#include <string.h>

void generateSquare(int n)
{
    int magicSquare[n][n];


    memset(magicSquare, 0, sizeof(magicSquare));

    int k= n / 2;
    int l = n - 1;


    for (int num = 1; num <= n * n;) {
        if (k == -1 && l == n)
        {
            l = n - 2;
            k = 0;
        }
        else {


            if (l == n)
                l = 0;


            if (k < 0)
                k = n - 1;
        }
        if (magicSquare[k][l])
        {
            l -= 2;
            k++;
            continue;
        }
        else
            magicSquare[k][l] = num++;

        l++;
        k--;
    }


    printf("The Magic Square for n=%d:\nSum of "
           "each row or column %d:\n\n",
           n, n * (n * n + 1) / 2);
    for (k = 0; k < n; k++) {
        for (l = 0; l < n; l++)
            printf("%3d ", magicSquare[k][l]);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("type a odd number: ");
    scanf("%d", &n);
    generateSquare(n);
    return 0;
}
