#include <stdio.h>
int dofy(int year, int month, int day);
void given(char s[]);
int year0, month0, day0;
int main(int argc, char *argv[])
{
    int m, n, i, daym, dayn, dayd, year1, leap0;
    year0 = 0, month0 = 0, day0 = 0;
    given(argv[1]);
    m = dofy(year0, month0, day0);
    year1 = year0;
    year0 = 0, month0 = 0, day0 = 0;
    given(argv[2]);
    n = dofy(year0, month0, day0);
    int q = year0 - year1;
    for (i = 0, dayn = 0; i < q; i++, year1++)
    {
        leap0 = (year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0);
        if (leap0 == 0)
            daym = 365;
        if (leap0 == 1)
            daym = 366;
        dayn += daym;
    }
    dayd = dayn + n - m;
    printf("The number of days between these two times:%d\n", dayd);
}
static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
int dofy(int year, int month, int day)
{
    int i, leap;
    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day;
}
void given(char s[])
{
    int i;
    for (i = 0; s[i] != '/'; i++)
    {
        year0 = year0 * 10 + (s[i] - '0');
    }
    for (i += 1; s[i] != '/'; i++)
    {
        month0 = month0 * 10 + (s[i] - '0');
    }
    for (i += 1; s[i] != '\0'; i++)
    {
        day0 = day0 * 10 + (s[i] - '0');
    }
}