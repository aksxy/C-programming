#include<stdio.h>
void printarr(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}
int main()
{
    //char arr[]={'a','k','s','x','y','\0'};
    char arr[]="aksxy";
    //char arr[5]="aksxy";  it is show you error
    //char arr[6]="aksxy";   you must give value greater then your name
    printarr(arr);
}

