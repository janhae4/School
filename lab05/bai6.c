#include<stdio.h>
#include<string.h>
// a b c d e f  

void findPos( char *a, char b, int *pos, int *check)
{
    int i; 
    int l = strlen(a) - 1;
    for(i = 0; i < l; i++)
    {
        if (a[i] == b)
        {
            pos[i] = i + 1;
            *check = 1;
            break;
        }
    }

}

void output(char *a, char b, int *pos, int *check)
{
    int i; 
    int l = strlen(a) - 1;
    if (check)
    {
        printf("%c is in position ", b);
        for(i = 0; i < l; i++)
        {
            if(pos[i] != 0)
                printf("%d ", pos[i]);
            else
                continue;
        }
    }
    else
        printf("%c is not appear.\n", b);
}

int main()
{
    char a[100];
    char b;
    int pos[100] = {0};
    int check = 0;

    printf("Enter a string: ");
    fgets(a, 99, stdin);

    printf("Enter a character: ");
    b = getchar();

    findPos(a, b, pos, &check);
    output(a, b, pos, &check);

	return 0;
}
