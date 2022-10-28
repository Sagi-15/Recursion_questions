#include <iostream>
using namespace std;
int size_of_index_array(int *A,int n,int x,int *index_arr){
    if(n==0){
        return 0;
    }
    int size_of_index_array_according_to_smaller_array=size_of_index_array(A+1,n-1,x,index_arr);
    //so recursion ka kaam to modify the index array and get the corresponding size of it
    if(A[0]==x){
        for(int i=0;i<size_of_index_array_according_to_smaller_array;i++){
            index_arr[i+1]=index_arr[i]+1;
        }
        //shifted all elements right and incremented by 1 as original array mei ek index greater hai
        index_arr[0]=0;
        //made first element as 0
        return size_of_index_array_according_to_smaller_array+1;
        //as first element is inserted so incremented size by 1
    }
    else{
        for(int i=0;i<size_of_index_array_according_to_smaller_array;i++){
            index_arr[i]+=1;
        }
        return size_of_index_array_according_to_smaller_array;
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