#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)

void shiftzeroes(int arr[],int size){
    int s1=0;
    int len=size-1;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            while(size>i){
                arr[i]=arr[i+1];
                i++;
            }
            arr[size-1]=0;
        }

    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); // flushes cout 
    


    int even[8]={12,32,0,4,67,8,0,0};
    shiftzeroes(even,8);
    print(even,8);
    }
