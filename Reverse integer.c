int reverse(int x) 
{
    
    long long result=0;
    while(x)
    {
        result=result*10+ x%10;
        x= x/10;
    }
    if(x>INT_MAX||x<INT_MIN)
        return 0;
        
    else
        return result;
      
}