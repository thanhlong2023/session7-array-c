#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Các phần tử là số nguyên tố trong mảng: ");
    for (int i = 0; i < n; i++)
    {
        bool isPrime = true;
        if (arr[i] <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j <= sqrt(arr[i]); j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
