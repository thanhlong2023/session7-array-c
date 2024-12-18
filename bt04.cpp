#include <bits/stdc++.h>
int main()
{
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d :", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}