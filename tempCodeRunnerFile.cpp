void mergesortedarray(int input[],int start,int end){
    int mid=(start+end)/2;
    int a[end-start+1];
    int j=start;
    int k=mid+1;
    for(int i=0;i<end-start+1;i++){
        
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
    for(int i=0;i<end-start+1;i++){
        input[start+i]=a[i];
    }
}
void MergeSort(int *A,int start_index,int end_index){
    if(start_index>=end_index){
        return;
    }
    int mid=(start_index+end_index)/2;
    MergeSort(A,start_index,mid);
    MergeSort(A,mid+1,end_index);
    mergesortedarray(A,start_index,end_index);
}
void mergeSort(int *A,int n){
    MergeSort(A,0,n-1);
}