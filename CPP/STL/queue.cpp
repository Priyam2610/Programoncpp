#include<bits/stdc++.h>
using namespace std;
// #define push push_back
// #define pop pop_back
#define CASES int t;cin>>t;while(t--)
int main(){
    //FIFO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    queue<int> q;
    q.push(4);
    q.emplace(22);
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.back()+=5;
    cout<<q.back();

    //size,swap,empty same as stack


    
    }

/* OUTPUT:--
0
22
4
27
*/