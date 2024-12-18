// Viết chương trình yêu cầu người dùng nhập vào số phần tử của mảng,
// sau đó nhập từng phần tử có trong mảng sao cho tất cả các phần tử được nhập phải là số lẻ,
// nếu không thì yêu cầu nhập lại phần tử đó.

#include <bits/stdc++.h>
int main()
{
    int n;
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        do
        {
            printf("Nhập phần tử lẻ thứ %d: ", i);
            scanf("%d", &temp);
            if (temp % 2 == 0)
            {
                printf("Phần tử phải là số lẻ. Vui lòng nhập lại.\n");
            }
        } while (temp % 2 == 0);
        arr[i] = temp;
    }
    printf("Các phần tử trong mảng: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}