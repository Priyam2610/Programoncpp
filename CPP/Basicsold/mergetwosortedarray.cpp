#include<bits/stdc++.h>
using namespace std;
#define push push_back
#define pop pop_back
#define CASES int t;cin>>t;while(t--)
void mergesortedarray(int arr1[],int m,int arr2[],int n,int arr[]){
    int s1=0,s2=0;
    int k=0;

    while(s1<m && s2<n){
        if(arr1[s1]<arr2[s2]){
            arr[k]=arr1[s1];
            k++;
            s1++;

        }
        else{
            arr[k]=arr2[s2];
            k++;
            s2++;

        }
        

    }
    while(s1<m){
        arr[k]=arr1[s1];
        s1++;
    }
    while(s2<n){
        arr[k]=arr2[s2];
        s2++;
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

    int even[6]={23,34,45,56,67,78};
    int odd[5]={11,22,33,44,68};
    int arr[11];
    mergesortedarray(even,6,odd,5,arr);
    print(arr,11); 



    
    }