#include <iostream>
using namespace std;
bool isPresent(int *A,int n,int element){
    if(n==0){
        return false;
    }
    bool is_present_in_smaller_array=isPresent(A+1,n-1,element);
    if(is_present_in_smaller_array || A[0]==element){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    cout<<isPresent(A,n,x);
}