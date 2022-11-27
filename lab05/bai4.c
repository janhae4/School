#include<stdio.h>
#include<string.h>
//Dấu hiệu viết hoa
int signal(char s)
{
	if (s == ' ')
		return 1;
	else 
		return 0;
}
// Xóa khoảng trắng cuối
void lastspace(char *s)
{
	int len = strlen(s);
	int i = len - 1;
	// for (i = 0; i < len - 1; i++)
	// {
	// 	if(signal(s[i]))
	// 	{
	// 		s[i] = '\0';
	// 		len --;
	// 	}
	// }
	while(signal(s[i]))
	{
		s[i] = '\0';
		i--;
	}
}
//Xóa khoảng trắng đầu
void firstspace(char *s)
{
	int count = 0;
	int i;
	int len = strlen(s);
	//Đếm khoảng trắng
	for(i = 0; i < len; i++)
	{
		if(signal(s[i]))
			count++;
		else
			break;
	}
	//Xóa khoảng trắng
	for(i = 0; i < len + count; i++)
	{
		s[i] = s[i + count];
	}
}
//Viết hoa chữ đầu, sau dấu cách
void normal(char *s)
{
	int i = 0;
	int len = strlen(s);
	strlwr(s);
	if(len > 0)
	{
		s[0] = toupper(s[0]);
	}
	for(i = 0; i < len - 1; i++)
	{
		if(signal(s[i]))
		{
			s[i + 1] = toupper(s[i + 1]);
		}
	}
}

int main()
{
    char s[100] = " PrOgRaMmInG MeThOd ";
	printf("%s\n", s);
	firstspace(s);
	lastspace(s);
	normal(s);
	printf("%s", s);

	return 0;
}
