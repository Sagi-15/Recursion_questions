#include <iostream>
using namespace std;
void mergesortedarray(long long input[],long long start,long long end){
    long long mid=(start+end)/2;
    long long a[end-start+1];
    long long j=start;
    long long k=mid+1;
    for(long long i=0;i<end-start+1;i++){
        
        if(j<=mid and k<=end and input[j]<input[k]){
            a[i]=input[j];
            j++;
        }else if(j<=mid and k<=end and input[j]>input[k]){
             a[i]=input[k];
            k++;
        }else if(j<=mid and k<=end and input[j]==input[k] ){
            a[i]=input[j];
            i++;
            a[i]=input[k];
            k++;
            j++;
            
        }else if(j>mid){
            
           a[i]=input[k];
            k++;
        }else if(k>end){
            a[i]=input[j];
            j++;
        }
    }
    for(long long i=0;i<end-start+1;i++){
        input[start+i]=a[i];
    }
}
void MergeSort(long long *A,long long start_index,long long end_index){
    if(start_index>=end_index){
        return;
    }
    long long mid=(start_index+end_index)/2;
    MergeSort(A,start_index,mid);
    MergeSort(A,mid+1,end_index);
    mergesortedarray(A,start_index,end_index);
}
void mergeSort(long long *A,long long n){
    MergeSort(A,0,n-1);
}
int main(){
    long long n;
    cin>>n;
    long long *A=new long long[n];
    for(long long i=0;i<n;i++){
        cin>>A[i];
    }
    mergeSort(A,n);
    for(long long i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}