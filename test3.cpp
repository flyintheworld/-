#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char b[20]={0};
	char a[20]={0};
	printf("����������:\n");
	scanf("%s",a);
	printf("����ɹ�\n");
	printf("���ٴ�ȷ������:\n");
	scanf("%s",b);
	int i=0;
	while(strcmp(a,b)!=0 && i<1)
	{
		printf("ȷ��ʧ��\n");	
		printf("���ٴ�ȷ��\n");
		scanf("%s",b);
	}
	printf("ȷ�ϳɹ�\n");
	system("pause");
	return 0;
}