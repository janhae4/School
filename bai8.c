#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int wordAppear( char *a, char *b)
{
    int i;
    int n;
    char token = strtok(a, " ");
    while(token != NULL)
    {
        if(strcmp(token, b))
        {
            return 1;
            break;
        }
        else
            token = strtok(NULL, " ");
    }
}

int wordPosition(char* a, char* b)
{
    int i;
    int c;
    for(i = 0; i < strlen(a); i++)
    {
        if(wordAppear(a, b))
            return c = i + 1;
            break;
    }
}
int main()
{
    char a[100];
    char b[100];

    printf("Enter a string: ");
    fgets(a, 99, stdin);

    printf("Enter a word: ");
    scanf("%s", b);

    printf("%d", wordAppear(a, b));

    // if (wordAppear(a, b))
    //     printf("This word is in position %d", wordPosition(a, b));
    // else
    //     printf("This word is not appear.");

	return 0;
}
