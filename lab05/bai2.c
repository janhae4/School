#include<stdio.h>

void input(char a[])
{
    printf("Input a string: ");
    scanf("%s", a);
}

int len(char a[])
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

void reverse(char a[])
{
	int i;
	for (i = len(a) - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
}
int main()
{
    char s[50];

    input(s);

	reverse(s);

	return 0;
}
