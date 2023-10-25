#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* des, const char* src)
//char*类型允许链式访问
{
	//断言
	assert(des != NULL);
	assert(src != NULL);
	char* ret = des;
	while (*des++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char s1[]="##############";
	char s2[12] = "hello world";

	printf("%s",my_strcpy(s1, s2));

}