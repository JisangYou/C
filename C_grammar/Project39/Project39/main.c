#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char str[20];

	fp = fopen_s(&fp,"a.txt", "a+");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		printf("���� �̸� : ");
		scanf_s("%s", str);
		if (strcmp(str, "end") == 0)
		{
			break;
		}
		else if (strcmp(str, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp))
				{
					break;
				} 
				printf("%s", str);
			}
		}
		else
		{
			fprintf(fp, "%s\n", str);
		}
	}
	fclose(fp);
	return 0;
}

// ������ �Է°� ����� ���� ��ȯ�� ������ fseek �Լ��� ȣ���ؾ� �Ѵ�.