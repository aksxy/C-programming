//  STRUCTURE PACKING
/*
      - Because of the structure padding size of the structure becomes
       more then the size of the actual structure due to this sane memory
       will get wested.
      - we can avoid the Vestige of memory by simply writing #pragrma pack()1
      Or __attribute__((packed));

*/
#include<stdio.h>
#pragma pack(1)
struct test
{
    int x;
    char y;
    int z;
} aksxy;
main()
{
    printf("%d",sizeof(aksxy));
}

// Second method for Structure packing

#include<stdio.h>
struct test
{
    int x;
    char y;
    int z;
} __attribute__((packed)); //you can write like this also
main()
{
    printf("%d",sizeof(struct test));
}
