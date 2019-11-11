#include <stdio.h>
int main() int strindex(char s[], char t[])
{
    int i, j, k;
    int strlen(const char *const q)
    {
        int p;
        for (p = 0; q[p]; p++)
            ;
        return p;
    }
    int len = strlen(s);
    for (i = len - 1; i >= 0; i--)
    {
        for (j = 1, k = 0; t[k] != 0 && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}