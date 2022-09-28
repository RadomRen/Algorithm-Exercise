#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    //prev保存上一个节点，cur保存要删除的节点
    struct ListNode* prev = NULL, * cur = head;
    //判断循环结束条件，cur为NULL时
    while (cur)
    {
        //判断是否是要删除的节点
        if (cur->val == val)
        {
            //如果第一个节点就是要删除节点，就修改头节点
            if (cur == head)
            {
                head = cur->next;
                free(cur);
                cur = head;
            }
            else//如果要删除的不是第一个节点，就在删除后，迭代cur到下一个节点
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else//如果不是要删除的节点，就迭代到下一个节点
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;//返回头节点
}