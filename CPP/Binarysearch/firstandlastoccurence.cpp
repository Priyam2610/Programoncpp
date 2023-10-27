#include <bits/stdc++.h>
using namespace std;
pair <int,int> find(int arr[],int n,int x){
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(first==-1)first=i;
            last=i;




        }
    }
    return {first,last};
}
int main(){
    int arr[8]= {11,11,12,12,23,24,34,35};
    pair<int,int> hello = find(arr,8,12);
    cout<<hello.first<<endl;
    cout<<hello.second<<endl;

}