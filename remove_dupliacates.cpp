void removeConsecutiveDuplicates(char *input){
    if(input[0]=='\0' || input[1]=='\0'){
        return;
    }
    removeConsecutiveDuplicates(input+1);
    if(input[0]==input[1]){
        int i=1;
        while(input[i]!='\0'){
            input[i-1]=input[i];
            i++;
        }
        input[i-1]='\0';
    }
}