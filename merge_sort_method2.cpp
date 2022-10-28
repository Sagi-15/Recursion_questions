#include <iostream>
using namespace std;
void merge(int *A,int n,int *B,int size_of_B,int *C,int size_of_C){
    int i=0,j=0,k=0;
    int *D=new int[n];
    while(i<size_of_B && j<size_of_C){
        if(B[i]<C[j]){
            D[k++]=B[i++];
        }
        else if(B[i]>C[j]){
            D[k++]=C[j++];
        }
        else{
            D[k++]=C[j++];
            D[k++]=B[i++]; 
        }
    }
    while(i<size_of_B){
        D[k++]=B[i++];
    }
    while(j<size_of_C){
        D[k++]=C[j++];
    }
    for(int i=0;i<n;i++){
        A[i]=D[i];
    }
}
void mergeSort(int *A,int size){
    if(size<=1){
        return;
    }
    int mid=size/2;
    int *B=new int[mid];
    int *C=new int[size-mid];
    for(int i=0;i<mid;i++){
        B[i]=A[i];
    }
    for(int i=mid;i<size;i++){
        C[i-mid]=A[i];
    }
    mergeSort(B,mid);
    mergeSort(C,size-mid);
    merge(A,size,B,mid,C,size-mid);
}
int main(){
    int n;
    cin>>n;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    mergeSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}