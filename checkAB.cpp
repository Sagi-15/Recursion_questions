#include <iostream>
using namespace std;
bool checkAB(char input[]){
    if(input[0]=='a'){
        if(input[1]=='\0'){
            return true;
            // as a can be followed by null also null so aage check ki no need
        }
        else if(input[1]=='a'){
            return checkAB(input+1);
            //as 1st index tak sahi aab aage check krna recursion ka kaam
        }
        else if(input[1]=='b' and input[2]=='b'){
            //wrote all 3 valid cases followed by a(index 0 walla)
            if(input[3]=='\0'){
                return true;
            }
            else if(input[3]=='a'){
                return checkAB(input+3);
                //as first 3 indexes checked uske baad recursion ka kaam
            }
            else{
                return false;//no more valid cases
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}