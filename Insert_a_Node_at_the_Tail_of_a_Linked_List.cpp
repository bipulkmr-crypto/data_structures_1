#include <bits/stdc++.h>
struct Node
{
    int data;
    Node *next;
};
struct SinglyLinkedList
{
    Node *insert_at_end(Node *head, int data)
    {
        Node *temp;
        // temp->data = data;
        Node *tail;
        temp = head;
        tail->data = data;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = tail;
            tail->next = NULL;
        }
        return head;
    }
    void print(Node *head)
    {
        while (head != NULL)
        {
            cout << head->data << endl;
            head = head->next;
        }
    }
};
int main()
{
    int n;
    cin >> n;
}