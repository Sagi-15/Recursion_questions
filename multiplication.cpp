#include <iostream>
using namespace std;
int multiply(int m,int n){
    if(n==0){
        return 0;
    }
    int product_if_m_is_multiplied_by_n_minus_one=multiply(m,n-1);
    return m+product_if_m_is_multiplied_by_n_minus_one;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<multiply(m,n);
}