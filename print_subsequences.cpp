#include <iostream>
#include <string>
using namespace std;
void print_subsequences(string input,string output=""){
    if(input==""){
        cout<<output<<" ";
        return;
    }
    print_subsequences(input.substr(1),output);
    print_subsequences(input.substr(1),output+input[0]);
}
int main(){
    string s;
    cin>>s;
    print_subsequences(s);
}