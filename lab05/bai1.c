#include<stdio.h>

void input(char a[])
{
    printf("Input a string: ");
    scanf("%s", a);
}

int length(char a[])
{
    int l = 0;
    if(a[0] == '\0')
        return 0;
    while (a[l] != '\0')
    {
        l ++;
    }
    return l;
}
int main()
{
    char s[50];

    input(s);

    printf("%d", length(s));

	return 0;
}
