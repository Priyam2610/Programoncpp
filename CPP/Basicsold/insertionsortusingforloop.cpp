#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){ 
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 

    int even[6]={23,11,45,32,67,44};
    insertionsort(even,6);
    
    

    
    }