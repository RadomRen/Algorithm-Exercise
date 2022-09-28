#define _CRT_SECURE_NO_WARNINGS
#include "testSingleList.h"

//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��


struct ListNode* removeElements(struct ListNode* head, int val) {
    //prev������һ���ڵ㣬cur����Ҫɾ���Ľڵ�
    struct ListNode* prev = NULL, * cur = head;
    //�ж�ѭ������������curΪNULLʱ
    while (cur)
    {
        //�ж��Ƿ���Ҫɾ���Ľڵ�
        if (cur->val == val)
        {
            //�����һ���ڵ����Ҫɾ���ڵ㣬���޸�ͷ�ڵ�
            if (cur == head)
            {
                head = cur->next;
                free(cur);
                cur = head;
            }
            else//���Ҫɾ���Ĳ��ǵ�һ���ڵ㣬����ɾ���󣬵���cur����һ���ڵ�
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else//�������Ҫɾ���Ľڵ㣬�͵�������һ���ڵ�
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;//����ͷ�ڵ�
}

//int main()
//{
//    struct ListNode* head = NULL;
//    SListPushBack(&head, 1);
//    SListPushBack(&head, 2);
//    SListPushBack(&head, 6);
//    SListPushBack(&head, 3);
//    SListPushBack(&head, 4);
//    SListPushBack(&head, 5);
//    SListPushBack(&head, 6);
//
//    SListPrint(head);
//
//    head = removeElements(head, 6);
//    SListPrint(head);
//    return 0;
//}