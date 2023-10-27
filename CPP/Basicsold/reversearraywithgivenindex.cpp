#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)

vector<int> reverse(vector<int> z,int m){
    int start=m;
    int end=z.size()-1;
    while(start<=end){
        swap(z[start],z[end]);
        start++;
        end--;
    }
    return z;

}
void print(vector<int> z){
    for(int i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    int n,y,m;
    cin>>n>>m;

    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>y;
        v.push(y);
    }
    vector<int> s=reverse(v,m);
    print(s);       
    }