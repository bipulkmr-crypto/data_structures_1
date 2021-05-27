#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define tiii tuple<int, int, int>
#define pll pair<long long,long long>
#define sii set<int>
#define sll set<long long>
#define vii vector<int>
#define vll vector<long long>
#define vll vector<long long>
#define mii map<int,int>
#define mll map<long long, long long>
#define lob lower_bound
#define upb upper_bound
#define ret return
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define fors(container, it, a, b) for(auto it = a; it != b; it++)
#define ff first
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,a,n) for(i=a;i<=n;i++)
#define fd(i,n,a) for(i=n;i>=a;i--)
#define gi(n) scanf(%d,&n)
int main()
{
    time_t start,end;
    int arr[20]={0};
    time(&start);
    {
        // ios_base::sync_with_stdio(false);
        arr[0]=3123;
        
    }
   time(&end);
   double time_taken=double(end-start);
    cout<<"Time taken for accessing the first index = "<<fixed<<time_taken<<setprecision(88)<<endl;
    time(&start);
    {
        // ios_base::sync_with_stdio(false);
        int i;
        for(i=0;i<10;i++)
        {
            arr[i]=12;
        }
        
    }
   time(&end);
    time_taken=double(end-start);
    cout<<"Time taken for accessing the middle index = "<<fixed<<time_taken<<setprecision(88)<<endl;
    time(&start);
    {
        // ios_base::sync_with_stdio(false);
        int i;
        for(i=0;i<20;i++)
        {
            arr[i]=13123;
        }
        
    }
   time(&end);
    time_taken=double(end-start);
    cout<<"Time taken for accessing the last index = "<<fixed<<time_taken<<setprecision(18)<<endl;
    
}
//the time difference is apparantly zero but when we will calculate for bigger size array it wil be significant