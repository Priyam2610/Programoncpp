#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    list<int> ls;
    ls.push(2);//push_back
    ls.push_front(22); //in vectors insert is used v.insert(v.begin(),4);//only thing that is different form vector 
    ls.emplace_back(22);
    for(list<int> ::iterator it=ls.begin();it!=ls.end();it++){
    	cout<<*(it)<<" ";
    }
    cout<<endl;
    ls.emplace_front(4); 
    for(list<int> ::iterator it=ls.begin();it!=ls.end();it++){
    	cout<<*(it)<<" ";
    }
    cout<<endl;
    ls.pop_front();
    for(list<int> ::iterator it=ls.begin();it!=ls.end();it++){
        cout<<*(it)<<" ";
    }
    ls.pop_front();
   vector<int> v;
   // v.push_front(4);     SHOWS ERROR in vector
   // v.emplace_front(4);  SHOWS ERROR in vector
   // v.pop_front();       SHOWS ERROR in vector
   v.emplace_back(3);
   v.push_back(10); 



	
	}

/*OUTPUT:--

22 2 22 
4 22 2 22 
22 2 22 */
