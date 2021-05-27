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
//here I have implemented merge sort algorithm which has a time complexity of O(nlogn)
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
    L[i]=arr[l+i];
    for(int j=0;j<n2;j++)
    R[j]=arr[m+1+j];
    int i=0;int j=0;
    int k=l;

    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l>=r)
    {
        return ;
    }
    int m=l+(r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
int main()
{
    time_t start, end;
    int arr[20];
    int i;
    for (i = 0; i < 20; i++)
    {
        if (i & 1)
            arr[i] = (420452) % (i + 1);
        else
            arr[i] = (7704234140) % (i + 1);
    }
    int val;
    bool flag = false;
    cin >> val;
    time(&start);
    for (i = 0; i < 20; i++)
    {
        if (arr[i] == val)
        {
            flag = true;
            cout << "found" << endl;
            break;
        }
    }
    if (flag == false)
        cout << "Not found" << endl;
    time(&end);
    double time_taken=(end-start);
    cout<<setprecision(10)<<fixed<<time_taken<<endl;
    //now sort the array
    mergeSort(arr,0,19);
        val;
    flag = false;
    cin >> val;
    time(&start);
    for (i = 0; i < 20; i++)
    {
        if (arr[i] == val)
        {
            flag = true;
            cout << "found" << endl;
            break;
        }
    }
    if (flag == false)
        cout << "Not found" << endl;
    time(&end);
     time_taken=(end-start);
    cout<<setprecision(10)<<fixed<<time_taken<<endl;
    
}