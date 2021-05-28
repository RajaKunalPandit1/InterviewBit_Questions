int Solution::isPalindrome(int A) {

     int res = A,sum=0;
     while(res>0){
         sum = sum*10+(res%10);
         res = res/10;
     }
     if(A == sum ){
         return 1;
     }else{
         return 0;
     }
    
    
}

// Another Solution

 int Solution::isPalindrome(int A) {
int ans;
if (A<0)
{
ans=0;
return ans;
}
string s=to_string(A);
int i=0;int n=s.length();
int j=n-1;
while((i!=j)&&(i<n/2)&&(j>(n/2)-1))
{
if (s.at(i)==s.at(j))
{
i++;
j–;
ans=1;
}
else
{
ans= 0;
break;
}
}
return ans;
}
