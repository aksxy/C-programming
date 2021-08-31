#include<stdio.h>
main()
{
    int arr[] = {56,42,83,12,62,67,75};
    int *arrp = arr;
    printf("Value at Position 3 of the array is %d\n",arr[3]);
    printf("The Address of first element of the array is %d \n",&arr[0]);
    printf("The Address of first element of the array is %d \n",arr);
    printf("The Address of second element of the array is %d \n",&arr[1]);
    printf("The Address of second element of the array is %d \n",arr + 1);
    printf("The Address of third element of the array is %d \n",&arr[2]);
    printf("The Address of third element of the array is %d \n",arr + 2);

    printf("The Address of first element of the array is %d \n",*(&arr[0]));
    printf("The Address of first element of the array is %d \n",arr[0]);
    printf("The Address of second element of the array is %d \n",*(arr));
    printf("The Address of second element of the array is %d \n",*(&arr[1]));
    printf("The Address of third element of the array is %d \n",arr[1]);
    printf("The Address of third element of the array is %d \n",*(arr + 1));

}
