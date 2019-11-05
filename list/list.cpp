#include <stdio.h>
#include <stdlib.h>

typedef struct tagListNode{
    int data;
    struct tagListNode* next;
}ListNode, *List;

void PrintList(List head);
List ReverseList(List head);

int main()
{
    //分配链表头结点
    ListNode *head;
    head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    head->data = -1;

    //将[1,10]加入链表
    int i;
    ListNode *p, *q;
    p = head;
    for(int i = 1; i <= 10; i++)
    {
        q = (ListNode *)malloc(sizeof(ListNode));
        q->data = i;
        q->next = NULL;
        p->next = q;
        p = q;
    }

    PrintList(head);           /*输出原始链表*/
    head = ReverseList(head);  /*逆序链表*/
    PrintList(head);           /*输出逆序后的链表*/
    return 0;
}

List ReverseList(List head)
{
    if(head->next == NULL || head->next->next == NULL)
    {
       return head;   /*链表为空或只有一个元素则直接返回*/
    }

    ListNode *t = NULL,
             *p = head->next,
             *q = head->next->next;
    while(q != NULL)
    {
      t = q->next;
      q->next = p;
      p = q;
      q = t;
    }

    /*此时q指向原始链表最后一个元素，也是逆转后的链表的表头元素*/
    head->next->next = NULL;  /*设置链表尾*/
    head->next = p;           /*调整链表头*/
    return head;
}

void PrintList(List head)
{
    ListNode* p = head->next;
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
