#include <bits/stdc++.h>
using namespace std;
#define size 10000
class Stack
{
    int top;

public:
    int a[size];
    Stack()
    {
        top = -1;
    }
    bool push(int);
    void pop();
    int first();
    bool isEmpty();
};
bool Stack::push(int x)
{
    if (top >= size - 1)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}
void Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow" << endl;
        // return INT_MIN;
    }
    else
    {
        top--;
        // return x;
    }
}
int Stack::first()
{
    if (!isEmpty())
    {
        int x = a[top];
        return x;
    }
    else
    {
        return INT_MIN;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
int main()
{
    class Stack s;
    cout << "Enter the number of values" << endl;
    int n;
    cin >> n;
    int i;
    for (i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        s.push(inp);
    }
    cout << "Values in Stack" << endl;
    for (i = 0; i < n; i++)
    {
        cout << s.first() << endl;
        s.pop();
    }
}