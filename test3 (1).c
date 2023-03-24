1.What will be the output of the program ?
#include<stdio.h>

int main()
{
    struct value
    {
        int bit1:1;
        int bit3:4;
        int bit4:4;
    }bit={1, 2, 13};

    printf("%d, %d, %d\n", bit.bit1, bit.bit3, bit.bit4);
    return 0;
}

2.What will be the output of the program?
#include<stdio.h>

int main()
{
    union a
    {
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0]=3;
    u.ch[1]=2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}
output
output is -12, -3