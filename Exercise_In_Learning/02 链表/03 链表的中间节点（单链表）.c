#define _CRT_SECURE_NO_WARNINGS

#include "testSingleList.h"

/*
给定一个头结点为 head 的非空单链表，返回链表的中间结点。
如果有两个中间结点，则返回第二个中间结点。
*/

////方法一：暴力解法，通过两次遍历
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* cur = head;
//    int i = 0;
//    for (i = 0; cur; cur = cur->next, i++);
//    cur = head;
//    int center = i / 2;
//    for (i = 0; i < center; i++)
//    {
//        cur = cur->next;
//    }
//    return cur;
//}

//方法二：快慢指针法
struct ListNode* middleNode(struct ListNode* head) {
    //快慢指针法
    struct ListNode* slow, * fast;
    slow = fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    //测试奇数个
    struct ListNode* head = NULL;
    SListPushBack(&head, 1);
    //SListPushBack(&head, 2);
    //SListPushBack(&head, 3);
    //SListPushBack(&head, 4);
    //SListPushBack(&head, 5);

    SListPrint(head);

    struct ListNode* center = middleNode(head);
    printf("%d\n", center->val);


    //测试偶数个
    head = NULL;
    SListPushBack(&head, 1);
    SListPushBack(&head, 2);
    SListPushBack(&head, 3);
    SListPushBack(&head, 4);
    SListPushBack(&head, 5);
    SListPushBack(&head, 6);

    SListPrint(head);

    center = middleNode(head);
    printf("%d\n", center->val);
}