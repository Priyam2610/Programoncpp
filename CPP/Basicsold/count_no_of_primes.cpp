#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
bool prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0)return 0;
    }
    return 1;
};

int countprime(int n){
    int cnt=0;
    if(n==1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(prime(i)){
            cnt++;

    }

    
}
return cnt;

};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    int n;
    cin>>n;
    cout<<countprime(n);

    
    }