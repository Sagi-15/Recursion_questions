#include <iostream>
using namespace std;
int staircase(int n){
    if(n==0 or n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int take_1_step_baaki_recursion=staircase(n-1);//1 step humnei liya baaki (n-1) recursion lega
    int take_2_step_baaki_recursion=staircase(n-2);//2 step humnei liya baaki (n-2) recursion lega
    int take_3_step_baaki_recursion=staircase(n-3);//3 step humnei liya baaki (n-3) recursion lega
    return take_1_step_baaki_recursion+take_2_step_baaki_recursion+take_3_step_baaki_recursion; 
}
int main(){
    int number_of_stairs;
    cin>>number_of_stairs;
    cout<<staircase(number_of_stairs);
}