#include <stdio.h>
int main()
{
    int a = 10;
    printf("a���ȬO%d\n", a);
    printf("a���a�b�O%d\n", &a);

    int b = 20;
    printf("b���ȬO%d\n", b);
    printf("b���a�b�O%d\n", &b);

    int c = 20;
    printf("c���ȬO%d\n", c);
    printf("c���a�b�O%d\n", &c);
}
