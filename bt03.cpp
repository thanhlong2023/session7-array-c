#include <bits/stdc++.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int check = 0;
    printf("Các phần tử chẵn trong mảng: ");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            check = 1;
        }
    }
    if (!check)
    {
        printf("Mảng không có số chẵn");
    }
    return 0;
}