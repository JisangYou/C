#include <stdio.h>

//int main(void)
//{
//	// �ü���� ���α׷��� ������ �� �⺻������ 3���� ��Ʈ�� ������ ����ϴ�. 
//
//	// ��Ʈ�� ���ϸ�
//	// stdin ǥ�� �Է� ��Ʈ��
//	// stdout ǥ�� ��� ��Ʈ��
//	// stderr ǥ�� ���� ��Ʈ��
//
//	int ch;
//
//	while (1)
//	{
//		ch = fgetc(stdin);
//		if (ch == EOF)
//		{
//			break;
//		}
//		fputc(ch, stdout);
//	}
//	system("pause");
//	return 0;
//}


// ������ �������� ��� ��Ŀ� ���� �ؽ�Ʈ ���ϰ� ���̳ʸ� ���Ϸ� ����������.
// �ؽ�Ʈ ������ �����͸� �ƽ�Ű �ڵ尪�� ���� ������ ���̸� �� �̿��� ������� ����� ������ ���̳ʸ� ����


int main(void) 
{
	FILE *fp;
	int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	int i, res;

	fp = fopen_s(&fp,"a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc_s(ary[i], fp);
	}
	fclose(fp);

	fp = fopen_s(&fp,"a.txt", "rt");
	while (1) 
	{
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);
	system("pause");
	return 0;

}