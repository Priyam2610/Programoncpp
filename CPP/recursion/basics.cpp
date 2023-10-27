#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}


// parameterized recursion
// void functionn(int n ,int sum){  sum=0
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     functionn(n-1,sum+n);
// }


//functional recursion
funnction(int n){
    if(n==1){
        return 1;
    }
    return n*funnction(n-1);
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 


    int n ;
    cin>>n;
    cout<<funnction(n);
    
    

    









    



    
    }