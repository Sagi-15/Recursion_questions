#include <iostream>
using namespace std;
// Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	int size=sizeof(input)-1;
    if(size<2){
        return;
    }
    replacePi(input+1);//ismei replace pi by 3.14
    if(*(input)=='p' && *(input+1)=='i'){
        for(int i=size+1;i>=4;i--){
            input[i]=input[i-2];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
        return;
    }
    else{
        return;
    }
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}


