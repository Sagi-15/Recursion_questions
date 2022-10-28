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
int keypad(int n,string output[]){
    if(n==0){
        output[0]="";
        return 1;
    }
    int smallOutput=keypad(n/10,output);
    string s=map_returner(n%10);
    int k=0;//m array ka index
    string m[s.length()*smallOutput];
    for(int i=0;i<smallOutput;i++){
        //go to each string in smallOutput aur uske end mei add each char of mapping of last digit
        for(int j=0;j<s.length();j++){
            //each char of last digit map j se hi reach
            m[k++]=output[i]+s[j];
        }
    }
    for(int i=0;i<s.length()*smallOutput;i++){
        output[i]=m[i];
    }
    return s.length()*smallOutput;
}
int main(){
    int n;
    cin>>n;
    string output[10000];
    int size=keypad(n,output);
    for(int i=0;i<size;i++){
        cout<<output[i]<<" ";
    }
}