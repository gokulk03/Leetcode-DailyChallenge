bool isPalindrome(char s[]){
    int len = strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            return false;
        }

    }
    return true;
}