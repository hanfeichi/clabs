#include <stdio.h>
int main()
{
    unsigned int x, bitamount;
    long maxamount; 
    x = 1;           /*定义一个工具数x为1*/
    bitamount = 0;   /*由于工具数“1”会在最后多移进一位，在这里我们设置bit位数的初始值为0*/
    maxamount = 1;   
    while (x != 0)
    {
        x <<= 1;
        ++bitamount;
        maxamount = maxamount * 2; /*“1”每向左移进一位，二进制的上限就增加一位，因此每个循环将最大容量乘上2*/
    }
    printf("bit of max number:%d\n", bitamount);
    printf("max number:%ld\n", maxamount);
} 
