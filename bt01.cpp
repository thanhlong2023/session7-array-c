#include <stdio.h>

int main()
{
    // khai báo và gán giá trị cho mảng
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    // in ra từng phần tử trong mảng
    printf("Các phần tử trong mảng: ");
    for (int i = 0; i < length; i++)
        printf("%d ", arr[i]);

    // in ra độ dài của mảng
    printf("\nĐộ dài của mảng: %d\n", length);
    return 0;
}