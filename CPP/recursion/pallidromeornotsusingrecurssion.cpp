#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}

bool pass(string &a, int i){
    if(i>=a.size()/2) return 1;
    if(a[i]!=a[a.size()-i-1]) return 0;

    pass(a,i+1);
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 


    string a;
    cin>>a;

    cout<<pass(a,0);




    
    }