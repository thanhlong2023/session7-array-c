#include <stdio.h>

int main()
{
    // Khai báo và gán giá trị cho mảng số nguyên có 5 phần tử
    int arr[5] = {3, 1, 4, 1, 5};
    int max = -1e9;
    int min = 1e9;

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Phần tử lớn nhất trong mảng: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng: %d\n", min);

    return 0;
}
