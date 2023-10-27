#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}

int fuunction(int n){
    if(n==1) return n;
    if(n==0) return n;
    return fuunction(n-1)+fuunction(n-2);
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
    cout<<fuunction(n);
    // Time complexity - O(2^n);
    
    

    









    



    
    }