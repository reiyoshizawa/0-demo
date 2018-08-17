#include <stdlib.h>
#include <stdio.h>
/*  syntax: ptr = malloc(byte-size); */

int main()
{
    int num;
    int i;
    int *ptr;

    num = 10;
    // malloc -> (void *)
    ptr = (int *)malloc(num * sizeof(int));
    ptr = (int *)calloc(num, sizeof(int)); // 0, ..., 0
    ptr = realloc(ptr, 20); // rellocate ptr[10] to 20 bytes

    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    for (i = 0; i < num; i++)
    {
        *(ptr + i) = i;
    }

    printf("ptr[0] = %d, ptr[5] = %d\n", *ptr, *(ptr + 5));
    free(ptr);
    printf("ptr[0] = %d, ptr[5] = %d\n", *ptr, *(ptr + 5));
    
    return 0;
}
