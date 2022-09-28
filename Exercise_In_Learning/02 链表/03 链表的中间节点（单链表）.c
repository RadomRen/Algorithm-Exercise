#define _CRT_SECURE_NO_WARNINGS

#include "testSingleList.h"

/*
����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
����������м��㣬�򷵻صڶ����м��㡣
*/

////����һ�������ⷨ��ͨ�����α���
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

//������������ָ�뷨
struct ListNode* middleNode(struct ListNode* head) {
    //����ָ�뷨
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
    //����������
    struct ListNode* head = NULL;
    SListPushBack(&head, 1);
    //SListPushBack(&head, 2);
    //SListPushBack(&head, 3);
    //SListPushBack(&head, 4);
    //SListPushBack(&head, 5);

    SListPrint(head);

    struct ListNode* center = middleNode(head);
    printf("%d\n", center->val);


    //����ż����
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