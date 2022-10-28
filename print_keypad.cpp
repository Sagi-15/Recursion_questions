#include <iostream>
#include <string>
using namespace std;
string map_returner(int n){
    if(n==2){
        return "abc";
    }
    else if(n==3){
        return "def";
    }
    else if(n==4){
        return "ghi";
    }
    else if(n==5){
        return "jkl";
    }
    else if(n==6){
        return "mno";
    }
    else if(n==7){
        return "pqrs";
    }
    else if(n==8){
        return "tuv";
    }
    else if(n==9){
        return "wxyz";
    }
}
void printkeypad(int n,string output=""){
    if(n==0){
        cout<<output<<" ";
        return;
    }
    string s=map_returner(n%10);
    for(int i=0;i<s.length();i++){
        printkeypad(n/10,s[i]+output);
    }
}
int main(){
    int n;
    cin>>n;
    printkeypad(n);
}