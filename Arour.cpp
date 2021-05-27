#include <bits/stdc++.h>
using namespace std;
#define size 10000
struct item
{
    int x;
    int y;
};
class Stack
{
    int top;

public:
    item a[size];
    Stack()
    {
        top = -1;
    }
    bool push(item);
    void pop();
    item first();
    bool isEmpty();
};
bool Stack::push(item x)
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
item Stack::first()
{
    if (!isEmpty())
    {
        item x = a[top];
        return x;
    }
    else
    {
        return {INT_MIN, INT_MIN};
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
int n, m;
int arr[100][100];
int marked[100][100];
int main()
{
    cin >> n >> m;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    auto isvalid = [&](int x, int y)
    {
        return (x >= 0 && x < n && y >= 0 && y < m);
    };
    class Stack st;
    int s, t;
    int u, v;
    cin >> s >> t;
    cin >> u >> v;
    memset(marked, 0, sizeof(marked));
    st.push({s, t});
    bool flag = false;
    marked[s][t] = true;
    while (!st.isEmpty())
    {
        auto p = st.first();
        if (isvalid(p.x + 1, p.y) && !marked[p.x + 1][p.y])
        {
            flag = true;
            break;
            st.push({p.x + 1, p.y});
        }
        else
            st.pop();
        if (isvalid(p.x - 1, p.y) && !marked[p.x - 1][p.y])
        {
            flag = true;
            break;
            st.push({p.x - 1, p.y});
        }
        else
            st.pop();
        if (isvalid(p.x, p.y - 1) && !marked[p.x][p.y - 1])
        {
            flag = true;
            break;
            st.push({p.x, p.y - 1});
        }
        else
            st.pop();
        if (isvalid(p.x, p.y + 1) && !marked[p.x][p.y + 1])
        {
            flag = true;
            break;
            st.push({p.x, p.y + 1});
        }
        else
            st.pop();
    }
    if(flag)
    cout<<"YES";
    else 
    cout<<"NO";
}
