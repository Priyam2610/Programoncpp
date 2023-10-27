#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); // flushes cout
    CASES{
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            if((arr[i]==1)||(arr[i]==2) ||(arr[i]=3) ||(arr[i]==4) ||(arr[i]==5) ||( arr[i]==6) || (arr[i]==7))count++;
        }
        cout<<count<<endl;


    }


















    }