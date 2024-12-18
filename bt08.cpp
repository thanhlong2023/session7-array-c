#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Nhập số hàng: ");
    scanf("%d", &rows);
    printf("Nhập số cột: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Nhập phần tử tại hàng %d, cột %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Mảng 2 chiều:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
