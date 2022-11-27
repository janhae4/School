#include<stdio.h>
int len(char *s)
{
    int l = 0;
    if(s[0] == '\0')
        return 0;
    while (s[l] != '\0')
    {
        l ++;
    }
    return l;
}
void conc(char *s1, char *s2)
{
    int i;
    int j;
    int l1 = len(s1);
    int l2 = len(s2);
    for(i = 0; i <= l2 ; i ++)
    {
        s1[l1 + i] = s2[i];
    }

}   

int main()
{
    char s1[50];
    printf("Enter a string: ");
    scanf("%s", s1);

    char s2[50];
    printf("Enter a string: ");
    scanf("%s", s2);
    
    conc(s1, s2);
    printf("Concatenating: %s\n", s1);

    strca(s1,s2);
	return 0;
}
