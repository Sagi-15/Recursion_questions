#include <iostream>
using namespace std;
int lastIndex(int *A,int n,int x){
    if(n==0){
        return -1;
    }
    if(A[n-1]==x){
        return n-1;
    }
    int last_index_in_smaller_array=lastIndex(A,n-1,x);
    if(last_index_in_smaller_array==-1){
        return -1;
    }
    else{
        return last_index_in_smaller_array;
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
    cout<<lastIndex(A,n,x);
}