#include <stdio.h>
// #include <stdlib.h> // ����� ���Ͼȿ� ���� ������ �����Ű�� ���� Ȯ���ϱ�����...

int main(void)
{

	printf("Be happy!");
	// system("pause");// �ý��� ������� �����մϴ�. 
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d�� %d�� ���� %d�Դϴ�. \n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);
	// ������ 10,8,16 ������ ǥ���� �� �ֽ��ϴ�. �׷��� C���� 2���� ����� ������� �ʽ��ϴ�. 

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	// ���� �Ҽ���(�Ǽ�)�� ǥ���ϴ� �����Դϴ�.

	//������ �����͸� �ִ� ���� �����̴�.

	int a;
	int b, c;
	double da;
	char ch;

	// l-value : ��������� ����ϴ� ���� 
	// r-value : ������ ����ϴ� ����

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);


	// ������ �����ϸ� ó������ �����Ⱚ�� ����Ǿ� ������
	// �ʱ�ȭ�� �����Ⱚ�� �����ϱ� ���� ���ʷ� ���� �����ϴ� ���Դϴ�.
	int aa;
	int bb = 20;
	int cc;

	aa = 10;
	printf("aa:%d\n", aa);
	printf("bb:%d\n", bb);
	printf("cc:%d\n", cc);

	// �������� ��� �������� ���� ���� ���� unsigned�� ����մϴ�.
	unsigned int aaa;
	aaa = 4294967295;
	printf("%d\n", aaa);
	aaa = -1;
	printf("%u\n", aaa);

	return 0;
}