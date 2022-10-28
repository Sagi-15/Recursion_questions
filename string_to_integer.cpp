#include <iostream>
#include <climits>
using namespace std;
int good_pairs(int A[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((k*A[i]+A[j])%n==0){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n,k;
    cin>>n>>k;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int k;
    cin>>k;
    cout<<good_pairs(A,n,k);
}