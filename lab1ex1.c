/*题目 1 ： 已知摄氏温度为 0 5 10 15 20 25 30 一直到 100 度， 步长为 5 ，要求打印的结果要有表的抬头（包括了摄氏温度和华氏温度的名称），
也就是第一行是摄氏温度对华氏温度表的英文。每一行第一个显示摄氏温度，再空2格显示华氏温度，清晰可辨认。参考书上第6页上的打印格式。*/

#include <stdio.h>
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 100;
    step = 5;
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * 9 / 5 + 32;
        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
}  