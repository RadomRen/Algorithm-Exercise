#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

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