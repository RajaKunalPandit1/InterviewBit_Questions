int Solution::isPrime(int A) {
    if(A==1 || A==0){
        return false;
    }if(A== 2 || A==3){
        return true;
    }if(A%2==0 || A%3==0){
        return false;
    }
    for(int i=5;i*i<=A;i+=6){
        if(A%i==0 || A%(i+2)==0){
            return false;
        }
    }return true;
}

// Another Approach

int Solution::isPrime(int n) {
        if (n < 2) return 0;
        int upperLimit = (int)(sqrt(n));
        for (int i = 2; i <= upperLimit; i++) {
            if (i < n && n % i == 0) return 0;
        }
        return 1;
}
