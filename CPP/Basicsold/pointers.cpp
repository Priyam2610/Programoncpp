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
    
    // // address
    // int num=7;
    // num=num+1;
    // // cout<<"adress of nm "<<&num;

    // int *ptr=&num;
    // *ptr=*ptr*8;num=num+1;
    // cout<<(*ptr)<<endl;
    // cout<<(ptr)<<endl;
    // int *abc=ptr;
    // abc++;
    // cout<<ptr<<endl;

    // int a=5;
    // int *t=&a;
    // cout<<t<<endl;
    // t=t+1;

    // cout<<t;

    // char a='n';
    // char *b=&a;
    // cout<<b<<endl;
    // b=b+1;
    // cout<<b<<endl;
    // int f=100;
    // int *g=&f;
    // cout<<g<<endl;


/******* for array ************/

    // int arr[10]={2,4,6};
    // cout<<&arr[1]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr +1 <<endl;
    // cout<<*(arr +1) <<endl;
    // cout<<*(arr +3) <<endl;
    

/******* for array done ************/
/******* for commarison ************/
    
    // int *f=&arr[0];
    // cout<<arr[0]<<endl;
    // cout<<sizeof(f)<<endl;
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(*f)<<endl;
    // cout<<sizeof(&f)<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;

/******* for commarison done ************/
    // int arr[10];
    // // arr=arr+1;   error
    // int *ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr;

/******** character array ****/
    int arr[5]={2,34,5,3,1};
    char ch[6]="abcde";
    cout<<arr<<endl;
    char *c=&ch[0];
    cout<<c<<endl;



    // sees for null in character array 



    char ar2='f';
    char *g=&ar2;
    cout<<g<<endl;




    









    



    
    }