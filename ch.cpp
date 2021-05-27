// // #include <bits/stdc++.h>
// // using namespace std;
// // int solve(int n, int p)
// // {
// //     if (p >= n)
// //     {
// //         return 0;
// //     }
// //     else
// //     {
// //         int ans = (n % p == 0) ? p : 0 + solve(n, p + 1);
// //         return ans;
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     int i;
// //     cin >> n;
// //     int arr[n];
// //     for (i = 1; i <= n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     int mx = INT_MIN;
// //     int mini = INT_MAX;
// //     for (i = 0; i < n; i++)
// //     {
// //         int sum = solve(arr[i], 1);
// //         mx = max(arr[i], mx);
// //         if (sum == arr[i])
// //         {
// //             mx = max(mx, arr[i]);
// //             mini = min(mini, arr[i]);
// //         }
// //     }
// //     cout << mx << " " << mini << endl;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// int mini = INT_MAX;
// int n;
// int arr[10001];
// int mx = INT_MIN;
// int sum(int n, int i)
// {
//     if (i < n)
//     {
//         if (n % i == 0)
//         {
//             return (i + sum(n, i + 1));
//         }
//         else
//         {
//             return sum(n, i + 1);
//         }
//     }
//     else
//     {
//         return 0;
//     }
// }
// bool good(int x)
// {
//     int i, s = 0;
//     s = sum(x, i);
//     return (s == x);
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
bool good(int x)
{
    int i, s = 0;
    for (i = 1; i < x; i++)
    {
        if ((x % i) == 0)
            s += i;
    }
    if (s == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve(int pos)
{
    if (pos >= n)
        return;
    else
    {
        if (good(arr[pos]))
        {
            mini = min(arr[pos], mini);
            mx = max(arr[pos], mx);
        }

        solve(pos + 1);
    }
}
int main()
{

    cin >> n;
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    solve(0);

    cout << mini << " " << mx << endl;
}