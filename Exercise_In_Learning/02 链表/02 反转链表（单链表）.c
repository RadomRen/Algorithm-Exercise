#define _CRT_SECURE_NO_WARNINGS
#include "testSingleList.h"

//��Ŀ
//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������

//���ַ�����
//1�����ڽڵ����ӵ�ת��
//2��ͷ�巨


//����1���ڵ����ӵ�ת�������������ڵ�����ӹ�ϵ����
//struct ListNode* reverseList(struct ListNode* head) {
//    //���Ϊ��������ֱ�ӷ��ؿ�
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    //���������ڵ㣬ǰ����n1��n2��ʾҪ������ϵ�Ľڵ㣬n3����n2����ǰ��ָ��Ҳ����n2֮��Ľڵ�
//    struct ListNode* n1 = NULL, * n2 = head, * n3 = head->next;
//    //��ֹ�����жϣ��ڶ����ڵ�Ϊ��
//    while (n2)
//    {
//        //����һ���ڵ�ָ��ǰһ���ڵ�
//        n2->next = n1;
//        //�ڵ�������
//        n1 = n2;
//        n2 = n3;
//        //��������ֹʱn3=NULL������Ҫ��һ���жϣ����ⱨ��
//        if (n3)
//        {
//            n3 = n3->next;
//        }
//    }
//    head = n1;
//    return head;
//}

//����2��ͷ��
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* next = NULL, * cur = head, * newHead = NULL;
    while (cur)
    {
        //�ȱ�����һ���ڵ��ַ��next��
        next = cur->next;
        //ͷ��
        cur->next = newHead;
        newHead = cur;
        //����������
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