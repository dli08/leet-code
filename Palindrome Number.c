bool isPalindrome(int x) {
    if(x<0)
        return false;
    if(x<10)
        return true;
    int y=0;
    int temp=x;
    while(temp)
    {
        y=y*10+temp%10;
        temp=temp/10;
    }
    return y==x;
        
    
}