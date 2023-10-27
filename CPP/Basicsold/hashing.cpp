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

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 


    // for integer
/*

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    


    int hash[9]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin>>q;

    while(q--){
        int s;
        cin>>s;
        cout<<hash[s]<<endl;
    }
*/ 
/* input
5
4 5 8 5 2
5
4
8
1
5
3
*/





    









    



    // for character

    // a->97 z->122
    // A->65 Z->90
    // "character- a" gets corresponding value in hash array



    

/*
    string s;
    cin>>s;

    int n;
    cin>>n;


    //precompute

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }




    while(n--){

        char c;
        cin>>c;

        //fetch
        cout<<hash[c]<<endl;

        }
        

*/

/*   input:-
asdddsddderu
4
s
d
f
u
*/


}