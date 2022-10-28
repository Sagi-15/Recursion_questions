#include <iostream>
#include <string>
using namespace std;
int subsequence(string input,string output[]){
    if(input.length()==0){
        /*if input="" then output is [""] and thus only 1 element in output*/
        output[0]="";
        return 1;
    }
    int number_of_subsequences_for_smaller_string=subsequence(input.substr(1),output);
    for(int i=number_of_subsequences_for_smaller_string;i<2*number_of_subsequences_for_smaller_string;i++){
        output[i]=input[0]+output[i-number_of_subsequences_for_smaller_string];
    }
    return 2*number_of_subsequences_for_smaller_string;
}
int main(){
    string input;
    cin>>input;
    string output[10000];
    int number_of_sequence_of_input=subsequence(input,output);
    for(int i=0;i<number_of_sequence_of_input;i++){
        cout<<output[i]<<" ";
    }
}