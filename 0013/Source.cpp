#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fuc(int* n1, int* n2);
int num[9];
int main()
{
    int loop1, loop2, sur, n1, n2;
    for (loop1 = 0; loop1 < 9; loop1++)
    {
        scanf("%d", &num[loop1]);
    }
    sur = num[0] + num[1] + num[2] + num[3] + num[4] + num[5] + num[6] + num[7] + num[8];
    sur = sur - 100;
    for (loop1 = 0; loop1 < 9; loop1++)
    {
        for (loop2 = 0; loop2 < 9; loop2++)
        {
            if (sur == num[loop1] + num[loop2])
            {
                n1 = num[loop1];
                n2 = num[loop2];

            }
        }
    }
    fuc(&n1, &n2);

    return 0;
}
void fuc(int* n1, int* n2)
{
    int loop1;
    for (loop1 = 0; loop1 < 9; loop1++)
    {
        if (num[loop1] != *n1 && num[loop1] != *n2)
        {
            printf("%d\n", num[loop1]);
        }

    }
}


