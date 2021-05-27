#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define pll pair<long long, long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int, int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s, x) (s.find(x) != s.end())
#define cpresent(s, x) (find(all(s), x) != s.end())
#define ford(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for (auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(), v.end()
#define ss second
#define rep(i, n) for (i = 0; i < n; i++)
#define fu(i, a, n) for (i = a; i <= n; i++)
#define fd(i, n, a) for (i = n; i >= a; i--)
#define gi(n) scanf(% d, &n)
ll n;
double d, h;
vector<pair<double,double>> arr;
bool good(double x)
{
    double mx = -1.0;
    ll i;
    double ang;
    rep(i, n)
    {
        if ((arr[i].ss-x)>0)
        {
            ang = (double(arr[i].ss - x)) / arr[i].ff;
            if ((ang - mx) >= 0)
            {
                mx = ang;
            }
        }
    }
    double res = ((double)(h - x)) / (d);
    if ((res - mx) >= 0)
        return true;
    else
        return false;
}
int main()
{
    cin >> n >> d >> h;
    ll i;
    double ratio = 0.0;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;

        arr.pb({a, b});
    }
    // ll x, y;
    // x=arr[0].ff;
    // y=arr[0].ss;
    // ratio=((double)(y)/x);
    // for(i=1;i<n;i++)
    // {
    //     double p=(double)(arr[i].ss)/arr[i].ff;
    //     if((p-ratio)>0)
    //     {
    //         ratio=p;
    //         x=arr[i].ff;
    //         y=arr[i].ss;
    //     }
    // }
    // double res=h;
    // res-=(double(ratio*d));
    // cout<<setprecision(3)<<fixed<<res<<endl;
    if(n==1)
    {
        double p=((double(h*arr[0].ff-arr[0].ss*d))/(arr[0].ff-d));
        if(p<0)
        p=0.00;
        cout<<setprecision(4)<<fixed<<p<<endl;
        return 0;
    }
    if(good(0.000))
    {
        cout<<"0.0"<<endl;
        return 0;
    }
    double low = 0.000000, mid, high = 1001.0;
    double eps = 1e-6;
    while ((high - low) > eps)
    {
        mid = low + (high - low) / 2.0;
        if (good(mid))
        {
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    if (good(low))
        cout << setprecision(13) << fixed << low << endl;
    else
    {
        cout << setprecision(13) << fixed << high << endl;
    }
}