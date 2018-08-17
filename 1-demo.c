#include <stdio.h>
int main()
{
    int arr[5]; // arr = pointer to the first int
    sizeof(arr); // 20 bytes
    sizeof(int); // 4 bytes
    arr[0] = 1; 
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    print_array(arr, 5);
    return 0;
}

int print_array(int *arr, int size)
{
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    int count = 0;
    while (count < size)
    {
        printf("%d\n", *arr);
        arr++;
        count++;
    }
}


