#include <iostream>
using namespace std;
int size_of_index_array(int *A,int n,int x,int *index_arr){
    if(n==0){
        return 0;
    }
    int size_of_array_wrt_smaller_array=size_of_index_array(A,n-1,x,index_arr);
    //so got the size of array wrt smaller arrray and recursion nei output array ko bhi modify
    if(A[n-1]==x){
        index_arr[size_of_array_wrt_smaller_array]=n-1;
        //baas last element update baaki previous tak toh recursion nei array builded up
        return size_of_array_wrt_smaller_array+1;
        //as last mei ek element added
    }
    else{
        return size_of_array_wrt_smaller_array;
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
    int *output=new int[n];
    int size=size_of_index_array(A,n,x,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
}