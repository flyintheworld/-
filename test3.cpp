#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char b[20]={0};
	char a[20]={0};
	printf("请输入密码:\n");
	scanf("%s",a);
	printf("输入成功\n");
	printf("请再次确认密码:\n");
	scanf("%s",b);
	int i=0;
	while(strcmp(a,b)!=0 && i<1)
	{
		printf("确认失败\n");	
		printf("请再次确认\n");
		scanf("%s",b);
	}
	printf("确认成功\n");
	system("pause");
	return 0;
}