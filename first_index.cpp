#include <iostream>
using namespace std;
int firstIndex(int *A,int n,int x){
    if(n==0){
        return -1;
    }
    if(A[0]==x){
        return 0;
    }
    int first_index_of_element_in_smaller_array=firstIndex(A+1,n-1,x);
    if(first_index_of_element_in_smaller_array!=-1){
        return first_index_of_element_in_smaller_array+1;
    }
    else{
        return -1;
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
    cout<<firstIndex(A+1,n-1,x);
}