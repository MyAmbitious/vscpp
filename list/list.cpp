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
    //��������ͷ���
    ListNode *head;
    head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    head->data = -1;

    //��[1,10]��������
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

    PrintList(head);           /*���ԭʼ����*/
    head = ReverseList(head);  /*��������*/
    PrintList(head);           /*�������������*/
    return 0;
}

List ReverseList(List head)
{
    if(head->next == NULL || head->next->next == NULL)
    {
       return head;   /*����Ϊ�ջ�ֻ��һ��Ԫ����ֱ�ӷ���*/
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

    /*��ʱqָ��ԭʼ�������һ��Ԫ�أ�Ҳ����ת�������ı�ͷԪ��*/
    head->next->next = NULL;  /*��������β*/
    head->next = p;           /*��������ͷ*/
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
