bool is_integer(float k)
{
  return std::floor(k) == k;
}

int Solution::isPower(int A) {
if(A==1)return 1;
for(int i=2; i<A; i++)
{
    if(is_integer(log(A)/log(i)))return 1;
}
return 0;
}

// Another Approach

int Solution::isPower(int A) 
{
    if(A==1)
    return 1;
    for(int i=2;i<=sqrt(A);i++)
    {
        long long int num=1;
        while(true)
        {
            num=num*i;
            if(num==A)
            return 1;
            
            else if(num>A)
            break;
        }
    }
    
    return 0;
}

// Another Approach

int Solution::isPower(int A) 
{
    if(A==1)
        return 1;
    int i;
    for(i=2;i*i<=A;i++)
    {
        int c=log(A)/log(i);
        if(pow(i,c)==A)
            return 1;
    }
    return 0;
}
