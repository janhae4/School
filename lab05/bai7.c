#include<stdio.h>
#include<string.h>
// a b c d e f  

void findPos_r( char *a, char b, int *pos, int *check)
{
    int i; 
    int l = strlen(a) - 1;
    for(i = 0; i < l; i++)
    {
        if (a[i] == b)
        {
            pos[i] = i + 1;
            *check = 1;
        }
    }

}

void output(char *a, char b, int *pos, int *check)
{
    int i;
    
    if(check)
    {
        printf("%c is in position ", b);
        for (i = 0; i < strlen(a) - 1; i++)
        {
            if (posi[i] == 0)
                continue;
            else
                printf("%d ", posi[i]);
        }
    }
    else
        printf("%c is not appear.\n", b); 
}

int main()
{
    char a[100];
    char b;
    int check = 0;
    int pos[100] = {0};

    printf("Enter a string: ");
    fgets(a, 99, stdin);

    printf("Enter a character: ");
    b = getchar();

    findPos_r(a, b, pos, &check);
    output(a, b, pos, &check);

	return 0;
}
