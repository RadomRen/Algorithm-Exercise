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


//打印链表
void SListPrint(struct ListNode* phead);

//链表后插
void SListPushBack(struct ListNode** pphead, SLTDataType x);