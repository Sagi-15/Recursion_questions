#include <iostream>
using namespace std;
bool isSorted(int *A,int n){
    //returns true if array A is sorted
    if(n==1){
        return true;
    }
    bool isSmallerArraySorted=isSorted(A+1,n-1);
    //now recursion answer laayega of whether 1st element onwards array sorted hai ki nahi
    //now hum check if 1st 2 elements sorted or not as baaki part sorted ya nahi pata lag gya ab tak recursion ans leke aaya
    if(isSmallerArraySorted && A[0]<=A[1]){
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
    cout<<isSorted(A,n);
    delete []A;
}