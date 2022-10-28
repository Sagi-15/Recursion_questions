#include <iostream>
using namespace std;
int number_of_digits(int n){
    //base case
    //if n is smaller than 9 we already know the answer ie. 1
    if(n<=9){
        return 1;
    }
    /*if(n<=99){
        return 2;
    }
    yeh likhna galat hota as 5 then also 2 hi return so 10<=n<=99 shi*/
    //as recursion n se chote kisi bhi number ka sahi answer laake de skta so n/10 ka bhi laake dega
    int n_by_10_mei_number_of_digits=number_of_digits(n/10);
    return n_by_10_mei_number_of_digits+1;
}
int main(){
    int n;
    cin>>n;
    cout<<number_of_digits(n);
}