#include <iostream>
using namespace std;
int lastIndex(int *A,int n,int element){
    if(n==0){
        return -1;
    }
    int last_index_of_smaller_array=lastIndex(A+1,n-1,element);
    //ismei answer will get stored
    //pehle check ki smaller array mei present agar yes tbhi check aage
    if(last_index_of_smaller_array==-1 && A[0]!=element){
        //agar smaller array se bhi element na mile and 1st element bhi x na ho then element not present
        return -1;
    }
    //agar not -1 matlab aage walle array se can get answer so last+1
    else if(last_index_of_smaller_array!=-1){
        return last_index_of_smaller_array+1;
    }
    //agar last index=-1 implies 1st element check equal matlab whi last index with that value
    else if(last_index_of_smaller_array==-1 && A[0]==element){
        return 0;
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
    cout<<lastIndex(A,n,x);
}