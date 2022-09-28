#define _CRT_SECURE_NO_WARNINGS
#include "testSingleList.h"

//´òÓ¡Á´±í
void SListPrint(struct ListNode* phead)
{
	struct ListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

struct ListNode* BuyListNode(SLTDataType x)
{
	struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	if (newNode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newNode->val = x;
	newNode->next = NULL;
	return newNode;
}

//Á´±íÎ²²å
void SListPushBack(struct ListNode** pphead, SLTDataType x)
{
	struct ListNode* newNode = BuyListNode(x);
	struct ListNode* tail = *pphead;
	if (tail == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}