// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define fast                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define pii pair<int, int>
// #define tiii tuple<int, int, int>
// #define pll pair<long long, long long>
// #define sii set<int>
// #define sll set<long long>
// #define vii vector<int>
// #define vll vector<long long>
// #define vll vector<long long>
// #define mii map<int, int>
// #define mll map<long long, long long>
// #define lob lower_bound
// #define upb upper_bound
// #define ret return
// #define present(s, x) (s.find(x) != s.end())
// #define cpresent(s, x) (find(all(s), x) != s.end())
// #define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
// #define fors(container, it, a, b) for (auto it = a; it != b; it++)
// #define ff first
// #define all(v) v.begin(), v.end()
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// struct BstNode
// {
//     int data;
//     BstNode *left;
//     BstNode *right;
// };
// BstNode *insert(BstNode *root, int data)
// {
//     if (root == NULL)
//     {
//         root = GetNewNode(data);
//     }
//     else if (data <= root->data)
//     {
//         root->left = insert(root->left, data);
//     }
//     else
//     {
//         root->right = insert(root->right, data);
//     }
//     return root;
// }
// bool search(BstNode *root, int data)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else if (root->data == data)
//     {
//         return true;
//     }
//     else if (data <= root->data)
//     {
//         return search(root->left, data);
//     }
//     else
//     {
//         return search(root->right, data);
//     }
// }
// BstNode *GetNewNode(int data)
// {
//     BstNode *new_node = new BstNode();
//     new_node->data = data;
//     new_node->left = NULL;
//     new_node->right = NULL;
//     return new_node;
// }
// void preorder(BstNode *root)
// {
//     if(root->left==NULL&&root->right==NULL)
//     {
//         cout<<root->data<<" ";
//         return ;
//     }
//     // else if(root->left==NULL&&root->right!=NULL)
//     // {
//     //     cout<<root->right->>>
//     // }
//     preorder(root->left);
//     preorder(root->right);
//     cout<<root->data<<endl;
// }

// int main()
// {
//     BstNode *root = NULL;
//     root=insert(root,10);
//     root=insert(root,15);
//     root=insert(root,432);
//     root=insert(root, 312);
// }
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    /* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void preOrder(Node *root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            cout << root->data << " ";
            return;
        }
        // else if(root->left==NULL&&root->right!=NULL)
        // {
        //     cout<<root->right->>>
        // }
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
    void postOrder(Node *root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            cout << root->data << " ";
            return;
        }
        if (root->left != NULL)
            postOrder(root->left);
        if (root->right != NULL)
            postOrder(root->right);
        cout << root->data << " ";
    }
    void inOrder(Node *root)
    {
        if (root->left == NULL && root->right == NULL)
        {
            cout << root->data << " ";
            return;
        }
        if (root->left != NULL)
            inOrder(root->left);
        cout << root->data << " ";
        if (root->right != NULL)
            inOrder(root->right);
    }
    int height(Node *root)
    {
        // Write your code here.
        if (root->left == NULL && root->right == NULL)
            return 0;
        else
        {
            int a = (root->left != NULL) ? height(root->left) : 0;
            int b = (root->right != NULL) ? height(root->right) : 0;
            int ans = 1 + max(a, b);
            return ans;
        }
    }
    // void fillMap(Node *root,int d,int l,map<int,pair<int,int>>& m)
    // {
    //     if(root==NULL)
    //     return;
    //     if(m.count(d)==0)
    //     {
    //         m[d]=make_pair(root->data,l);
    //     }
    //     else if(m[d].second>l)
    //     {
    //         m[d]=make_pair(root->data,l);
    //     }
    //     fillMap(root->left,d-1,l+1,m);
    //     fillMap(root->right,d-1,l+1,m);
    // }
    // void topView(Node *root)
    // {
    //     map<int,pair<int,int>>m;
    //     fillMap(root,0,0,m);
    //     for(auto it=m.begin(); it!=m.end();it++)
    //     {
    //         cout<<it->second.first<<" ";
    //     }
    // }
    // void topView(Node* root)
    // {
    //     queue<pair<Node*,int> >q;
    //     q.push(make_pair(root,0));
    //     int hd=0,l=0,r=0;
    //     stack<int> left;
    //     vector<int> right;
    //     Node* node;
    //     while(q.size())
    //     {
    //         node=q.front().first;
    //         hd=q.front().second;
    //         if(hd<l)
    //         {
    //             left.push(node->data);
    //             l=hd;
    //         }
    //         else if(hd>r)
    //         {
    //             right.push_back(node->data);
    //         }
    //         if(node->left)
    //         {
    //             q.push(make_pair(root->left,hd-1));
    //         }
    //         if(node->right)
    //         {
    //             q.push(make_pair(root->right,hd+1));
    //         }
    //         q.pop();
    //         while (left.size())
    //         {
    //             cout<<left.top()<<" ";
    //             left.pop();
    //         }
    //         cout<<root->data<<" ";
    //         for(auto x:right)
    //         {
    //             cout<<x<<" ";
    //         }
    //     }
    // }
    void topView(Node *root)
    {
        queue<pair<int, Node *>> q;
        q.push(make_pair(0, root));
        map<int, Node *> ans;
        for (auto i = q.front(); !q.empty(); q.pop(), i = q.front())
        {
            if (!i.second)
                continue;
            ans.insert(i);
            q.push(make_pair(i.first + 1, i.second->right));
            q.push(make_pair(i.first - 1, i.second->left));
        }
        for (auto i : ans)
            cout << i.second->data << " ";
    }

}; //End of Solution

int main()
{

    Solution myTree;
    Node *root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.preOrder(root);
    return 0;
}
