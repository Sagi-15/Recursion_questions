#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int partition(int *A,int start_index,int end_index){
    int pivot=A[start_index],count=0;
    for(int i=start_index+1;i<=end_index;i++){
        if(A[i]<=pivot){
            count++;
        }
    }
    swap(A[start_index],A[start_index+count]);
    int i=start_index,j=end_index;
    while(i<start_index+count){
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<start_index+count){
            swap(A[i],A[j]);
        }
    }
    return start_index+count;
}
void QuickSort(int *A,int start_index,int end_index){
    //start se leke end tak sort krega
    if(start_index>=end_index){
        return;
    }
    int c=partition(A,start_index,end_index);
    QuickSort(A,start_index,c-1);
    QuickSort(A,c+1,end_index);
}
void quickSort(int *A,int size){
    QuickSort(A,0,size-1);
}
int main(){
    int n;
    cin>>n;
    int *A=new int[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    quickSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}