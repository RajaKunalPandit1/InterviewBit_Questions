vector<int> Solution::allFactors(int A) {
vector<int>ans;

for(int i=1;i<=sqrt(A);i++)
{
    if(A%i==0)
    {
        if(i!=sqrt(A))
        {
        ans.push_back(i);
        ans.push_back(A/i);
        }
        else
        {
        ans.push_back(i);
        }
    }
}

//ans.push_back(A);
sort(ans.begin(),ans.end());
return ans; 
}

// Another Approach

vector<int> Solution::allFactors(int A) {
    vector<int> res;
    for (int i = 1; i*i <= A; ++i)
        if (A % i == 0)
            res.push_back(i);
    
    for (int i = res.size() - 1; i >= 0; --i)
        if (res[i] != A / res[i])
            res.push_back(A / res[i]);
    
    return res;
}
