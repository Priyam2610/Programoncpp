#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int gcd(int a,int b){
if(b==0)return a;
return gcd(b,a%b);
}


void update(int *p){
    //p=p+1;    not possible
    *p=*p+1;
    cout<<*p<<endl;
    

    }


int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
/***
    int value =4;
    int *p=&value;
    cout<<*p<<endl;
    update(p);
    cout<<*p<<endl;


    // pointers passed in function updates only value
    // not pointer address after passing
    // lecture 29/149
*****/


///important//

    // int a=5;
    // int *ptr=&a;
    // int **f=&ptr;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<f<<endl;
    // cout<<&f<<endl;
    // cout<<**f<<endl;


    int i =5;

    // reference variable 

    int & j=i;
    

    



    



    
    }

     

