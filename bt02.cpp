// Khai báo mảng số nguyên có 5 phần tử, yêu cầu người dùng nhập lần lượt từng phần tử trong mảng, sau khi nhập xong thì in mảng ra màn hình
#include <bits/stdc++.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Nhập vào phần tử vị trí thứ %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}