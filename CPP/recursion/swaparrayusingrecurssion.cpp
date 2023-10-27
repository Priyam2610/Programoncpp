#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}

void pass(int arr[],int i,int size){
    if(i>=size/2){
        // for(int i =0;i<n;i++)cout<<arr[i];

        return;
    }
    swap(arr[i],arr[size-i-1]);
    pass(arr,i+1,size);
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 



    
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)cin>>arr[i];
    int i =0;
    pass(arr,i,n-1);
    for(int i =0;i<n;i++)cout<<arr[i];






    }