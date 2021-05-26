static bool mycomp(string a, string b)
{
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) 
{
    int n = A.size();
    
    vector<string> strA(n);
    for(int i=0; i<n; ++i)
        strA[i] = to_string(A[i]);
    
    sort(strA.begin(), strA.end(), mycomp);
    
    string ans = "";
    for(auto i : strA)
        ans += i;
        
    if(ans[0] == '0') return "0";
    
    return ans;
}

// Alternative Approach


unsigned long long concatenate(int x, int y) {
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    return (unsigned long long)x * pow + y;        
}





bool myfunction (int i,int j) { 
    
    return concatenate(i,j) > concatenate(j,i); 
    
}


struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;


string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    
//  sort(A.begin(),A.end(),myobject);
    
    
    
    
    vector<int> B = A;
    
    sort(B.begin(),B.end(),myfunction);
    
    string s;
    
    if(B[0] == 0) {
    
     cout<<"0";return "";
     
    }
    for(int i=0;i<B.size();++i){
        
        cout<<B[i];
        
    }
    
    return "";
   
   
    
   
}
