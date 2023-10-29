#include<iostream>
using namespace std;
bool checkkey(string str,int n,int i,int key){
    if(i>=n){
        return 0;
    }

    if(str[i]==key){
        return 1;
    }
    return checkkey(str,n,i+1,key);
}
int main(){
    string str = "SjxSubham";
    int n = str.length();
    char key = 'x';
    int i=0;

    bool ans = checkkey(str,n,i,key);
    cout<<"Answer is : "<<ans<<endl;
}
