#include <iostream>
using namespace std;
int sum(int *A,int n){
    if(n==0){
        return 0;
    }
    int sum_of_smaller_array=sum(A+1,n-1);
    //so stored to sum of elements from index=1 till end joh value recursion laayega
    return A[0]+sum_of_smaller_array;
}
int main(){
    int n;
    cin>>n;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<sum(A,n);
}