#include <iostream>
using namespace std;
int number_of_zeroes(int n){
    if(n<=9 && n!=0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int number_of_zeroes_in_n_by_10=number_of_zeroes(n/10);
    //ie. first n-1 digits mei kitne 0 woh iss variable mei stored
    if(n%10==0){
        //matlab last digit bhi zero so ans mei 1 add
        return number_of_zeroes_in_n_by_10+1;
    }
    else{
        return number_of_zeroes_in_n_by_10;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<number_of_zeroes(n);
}