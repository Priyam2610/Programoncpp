#include<bits/stdc++.h>
using namespace std;
#define push emplace_back
#define pop pop_back


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    vector<int> v;
    v.push(12);
    v.push(11);
    v.push(10);
    v.push(2);
    v.push(15);
    v.push(6);
    vector<int> ::iterator ct=v.begin();
    cout<<*(ct)<<endl;

    for(auto it :v){//iterate on datatype
    	cout<<it<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.end();
    // --it;//return next to the last element
    cout<<*(it)<<endl;
    v.erase(v.begin());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    	cout<<*(it)<<" ";
    }
    v.erase(v.begin()+1,v.end()-1);//not included last/also begin can be used
    cout<<endl;
    for(auto it:v){
    	cout<<it<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+1,2,5);
    for(auto it:v){
    	cout<<it<<" ";
    }
    v.clear();
    cout<<endl;
    for(auto it:v){
    	cout<<it<<" ";
    }
    cout<<v.empty();//if empty true/ else false


	
	}