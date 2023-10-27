#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)

void merge(int arr1[],int m,int arr2[],int n){
    int s1=0,s2=0;
    while(s1<m && s2<n){
        if(arr1[s1]>arr2[s2]){
            int k;
            for(k=m-1;k>s1;k--){
                arr1[k]=arr1[k-1];
                // cout<<arr1[k]<<" ";
            }
            // cout<<endl;
            arr1[s1]=arr2[s2];
            // cout<<arr1[s1]<<" ";
            // cout<<endl;
            s2++;
            
        }
        else{
            s1++;
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
    int  even[6]={4,5,7,8,0,0};
    int odd[2]={1,4};
    merge(even,6,odd,2);
    print(even,6);
    
    }