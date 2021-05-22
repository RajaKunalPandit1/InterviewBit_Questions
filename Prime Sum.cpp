vector<int> Solution::primesum(int A) {
   vector primes(A+1,true);
primes[0] = false;
primes[1] = false;
int limit = (int)sqrt(A);
for(int i = 2; i <= limit ; i++) {
if(primes[i] == true) {
for(int j = i*i; j < A; j += i) {
primes[j] = false;
}
}
}
vector <int> res;
for(int i = A-1; i >= A/2; i--) {
if(primes[i] && primes[A-i]) {
res.push_back(A-i);
res.push_back(i);
break;
}
}
return res;
}


// Alternative Approach


int isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

vector<int> Solution::primesum(int n) {
    vector<int> v;
    for(int i=2;i<=n/2;i++)
    {
        if( isPrime(i) && isPrime(n-i) )
        {
            v.push_back(i);
            v.push_back(n-i);
            return v;
        }
    }
}
