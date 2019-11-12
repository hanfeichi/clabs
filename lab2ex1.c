#include <stdio.h>
int main()
{
    unsigned int x, bitamount;
    unsigned int maxamount = 1;
    x = 1;         /*定义一个工具数x为1*/
    bitamount = 0; /*由于工具数“1”会在最后多移进一位，在这里我们设置bit位数的初始值为0*/
    while (x != 0)
    {
        x <<= 1;
        ++bitamount;
    } 
    while (maxamount>0)
    {
        maxamount++;
    }
    printf("bit of max number:%d\n", bitamount);
    printf("max number:%u\n", maxamount-1);
}
