#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;

//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode* next;
};


//��ӡ����
void SListPrint(struct ListNode* phead);

//������
void SListPushBack(struct ListNode** pphead, SLTDataType x);