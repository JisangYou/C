#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data; // �����͸� ���� ����
	struct _node * next; // ������ ����!

} Node;

int main(void)
{
	Node * head = NULL;    // NULL ������ �ʱ�ȭ, ����Ʈ�� �Ӹ��� ����Ű�� ������ ����
	Node * tail = NULL;	   // ����Ʈ�� ������ ����Ű�� ������ ����
	Node * cur = NULL;	   // ����� �������� ��ȸ�� ���Ǵ� ������ ����

	Node * newNode = NULL;
	int readData;

	/**** �����͸� �Է� �޴� ���� ****/
	while (1)
	{
		printf("�ڿ��� �Է�: ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;

		/*** ����� �߰����� ***/
		newNode = (Node*)malloc(sizeof(Node)); // ���(�ٱ���)�� ����
		/*
			�����Ͱ� �ƴ� ���� . ������ ���~~
			ȭ��ǥ ������ ( -> )�� [����ü ���]�� �����Ͽ� �� �Ҵ�
		*/
		newNode->data = readData;	// ����� ������ ����
		newNode->next = NULL;	//����� next�� NULL�� �ʱ�ȭ

		if (head == NULL)	// ù ���� �����,
			head = newNode;	// ù ��° ��带 head�� ����Ű�� ��
		else // �� ��° ���� �����,
			tail->next = newNode;

		tail = newNode; // ����� ���� tail�� ����Ű�� ��
	}
	printf("\n");

	/**** �Է� ���� �������� ��°��� ****/
	printf("�Է� ���� �������� ��ü���! \n");
	if (head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		cur = head;					// cur�� ����Ʈ�� ù ��° ��带 ����Ų��.
		printf("%d  ", cur->data);   // ù ��° ������ ���

		while (cur->next != NULL)    // ����� ��尡 �����Ѵٸ�,
		{
			cur = cur->next;
			printf("%d  ", cur->data);
		}
	}
	printf("\n\n");

	/**** �޸��� �������� ****/
	if (head == NULL)
	{
		return 0;    // ������ ��尡 �������� �ʴ´�.
	}
	else
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode);    // ù ��° ����� ����

		while (delNextNode != NULL)    // �� ��° ������ ��� ���� ���� �ݺ���
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);    // �� ��° ������ ��� ����
		}
	}
	system("pause");
	return 0;
}


// pa->x, (*pa).x
// ����ü �����Ϳ��� �����Ͱ� ����ü�� ����� ����ų�� ���