#define _CRT_SECURE_NO_WARNINGS
#include "testSingleList.h"

//题目
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。

//两种方法：
//1、相邻节点连接倒转法
//2、头插法


//方法1：节点连接倒转法：相邻两个节点的链接关系互换
//struct ListNode* reverseList(struct ListNode* head) {
//    //如果为空链表，则直接返回空
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    //设置三个节点，前两个n1，n2表示要互换关系的节点，n3保存n2互换前的指向，也就是n2之后的节点
//    struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;
//    //终止条件判断，第二个节点为空
//    while (n2)
//    {
//        //将后一个节点指向前一个节点
//        n2->next = n1;
//        //节点向后迭代
//        n1 = n2;
//        n2 = n3;
//        //在条件终止时n3=NULL，所以要加一个判断，避免报错
//        if (n3)
//        {
//            n3 = n3->next;
//        }
//    }
//    head = n1;
//    return head;
//}

//方法2：头插
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* next = NULL, * cur = head, * newHead = NULL;
    while (cur)
    {
        //先保存下一个节点地址到next中
        next = cur->next;
        //头插
        cur->next = newHead;
        newHead = cur;
        //迭代往后走
        cur = next;
    }
    return newHead;
}


int main()
{
    struct ListNode* head = NULL;
    SListPushBack(&head, 1);
    SListPushBack(&head, 2);
    SListPushBack(&head, 3);
    SListPushBack(&head, 4);
    SListPushBack(&head, 5);
    SListPushBack(&head, 6);
    SListPrint(head);

    head = reverseList(head);
    SListPrint(head);
}