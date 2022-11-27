#include<stdio.h>
#include<string.h>

void input(char a[])
{
    printf("Input your name: ");
    fgets(a, 50, stdin);
}

void split(char a[])
{
	char *token = strtok(a, " ");
	char *first = NULL;
	char *last = NULL;
	while (token != NULL)
	{
		if (first == NULL)
		{
			first = token;
		}
		else last = token;
		token = strtok(NULL, " ");
	}
	printf("first name: %s\nlast name: %s", first, last);
}

int main()
{
    char s[50];

    input(s);

	split(s);

	return 0;
}
