#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;}
    while(b!=a){
        if(b>a){
            b=b-a;
        }
        else{
            a=a-b;
        }
    }
    return a;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)
    }