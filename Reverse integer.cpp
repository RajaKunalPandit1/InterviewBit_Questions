int Solution::reverse(int A) {
 int rev = 0;
int rem = 0;
bool neg = false;
if(A==0) return 0;
if(A<0){
neg = true;
A = -1*A;

}
while(A>0){
    rem = A%10;
    if(rev> (INT_MAX-rem)/10) return 0;
    rev = rev*10 + rem;
    A = A/10;
}

if(neg == true){
    return -1*rev;
}
else{
    return rev;
}
    
}

// Anoter Approach
int Solution::reverse(int X) {
    bool isNegative = X < 0;
    long long int A = abs(X);
    
    long long int newNum = 0;
    while(A > 0) {
        newNum = 10*newNum + A%10;
        A = A/10;
    }
    
    if (isNegative && -newNum < INT_MIN) return 0;
    else if (newNum > INT_MAX) return 0;
    else return isNegative ? -newNum : newNum;
}
