#include <string.h>
#include <stdio.h>

char *strrev(char *s1)
{
    int i;
    int len = 0;
    char temp;

    i = 0;
    while(s1[len])
        len++;
    len--;
    while(i < len)
    {
        temp = s1[len];
        s1[len] = s1[i];
        s1[i] = temp;
        i++;
        len--;
    }
    return (s1);
}

int main(void)
{
	char dizi[] = "ahmet";
	printf("%s", strrev(dizi));
}