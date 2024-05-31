string reverseWords(string s1){
    string s2;
    int len = s1.length();
    for(int i=len-1;i>=0;i--){
        if(s[i]=='.'){
            r = len-i;
            len=i-1;
            s2.append(s1.substr(i+1,r));
            s2.append('.');
        }
    }
    s2.append(s1.substr(0,len+1));
}