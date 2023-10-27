S#include<bits/stdc++.h>
using namespace std;
// #define push push_back
// #define pop pop_back
#define CASES int t;cin>>t;while(t--)
int main(){
                                    // LIFO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    stack<int> st;

    st.push(4);
    st.push(22);
    st.push(3);
    st.push(45);
    st.emplace(12);
    cout<<st.top();
    st.pop();
    cout<<endl;
    cout<<st.size();
    cout<<endl;
    cout<<st.empty();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<endl;
    cout<<st.empty();


    
    }


/*Output:--
12
4
0
1*/