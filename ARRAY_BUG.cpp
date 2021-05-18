vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret; 
    B=B%A.size();
    for (int i = B; i < A.size(); i++) {
        ret.push_back(A[i]);
    }for(int j=0;j<B;j++){
        ret.push_back(A[j]);
    }
    return ret; 
}

// Another Approach

vector<int> Solution::rotateArray(vector<int> &A, int B) {
    vector<int> ret; 
    B=B%A.size();
    for (int i = 0; i < A.size(); i++) {
        ret.push_back(A[(i + B)%A.size()]);
    }
    return ret; 
}
