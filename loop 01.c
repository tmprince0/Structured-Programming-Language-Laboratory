#include <stdio.h>
#include<conio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d", i);
        if (i != N)
        {
            printf(", ");
        }
    }
    printf("\n");

    getch();
}
