// // this is linear recursion wilh time complexity of O(n)
// //The depth of the tree is n and width is 1
// //the disadvantange is the time taken is comparitively more than the iterative version of the solution and there is also change of stack overflow in case of normal compiler
// //advantage is that some complex problems like NP hard problems can be solved easily by reccursion and it is more intuitive and easier to understand
// //space complexity is o(n) as we know the space complexity is directly proportional to the depth of the reccursive tree
// //time complexity is also O(n)
// #include <bits/stdc++.h>
// using namespace std;
// int mini = INT_MAX;
// int n;
// int arr[10001];
// int mx = INT_MIN;
// bool good(int x)
// {
//     int val = sqrt(x);
//     return ((val * val) == x);
// }
// void solve(int pos)
// {
//     if (pos >= n)
//         return;
//     else
//     {
//         if (good(arr[pos]))
//         {
//             mini = min(arr[pos], mini);
//             mx = max(arr[pos], mx);
//         }

//         solve(pos + 1);
//     }
// }
// int main()
// {

//     cin >> n;
//     int i;
//     for (i = 0; i < n; i++)
//         cin >> arr[i];
//     solve(0);
//     cout << mini << " " << mx << endl;
// }
#include <bits/stdc++.h>
using namespace std;
int mini = INT_MAX;
int n;
int arr[10001];
int mx = INT_MIN;
// int sum = 1;
int solve(int n, int p)
{
    if (p < n)
    {
        return 0;
    }
    else if (n < 2)
    {
        return n;
    }
    else
    {
        if (n % p == 0)
        {
            return (p + solve(n / p, p + 1));
        }
        else
        {
            return (solve(n, p + 1));
        }
    }
}
int main()
{
    cin >> n;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        int sum = solve(arr[i], 2);
        if (sum == arr[i])
        {
            mini = min(arr[i], mini);
            mx = max(arr[i], mx);
        }
    }
    cout << mini << " " << mx << endl;
}