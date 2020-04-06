/*
You have an array of integers A1, A2, ..., AN. The function F(P), where P is a subset of A, 
is defined as the XOR (represented by the symbol ⊕) of all the integers present in the subset. 
If P is empty, then F(P)=0.
Given an integer K, what is the maximum value of K ⊕ F(P), over all possible subsets P of A?
*/
#include <bits/stdc++.h>
using namespace std;
int findLength(int n) {
    int cnt = 0;
    while(n){
        cnt++;
        n>>=1;
    }
    // cout <<cnt <<" : "<<endl;
    return cnt;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    std::vector<int> vec(n) ;
	    for(int i=0;i<n;i++)
	        cin>>vec[i];
	    
	    vector<int> bits[12];
	    for(int i=0;i<n;i++) {
	       bits[findLength(vec[i])].push_back(vec[i]);
	    }
	    
	    int finalArray[100],index=0;
	    for (int i=11; i>0; i--) {
	        
	      //  cout << bits[i].size() << ":" <<endl;
	       
	        if(bits[i].size()) {
	            finalArray[index++] = bits[i][0];
	            
	            for(int j=0;j<bits[i].size();j++) {
	                int temp = bits[i][0] ^ bits[i][j];
	                bits[findLength(temp)].push_back(temp);
	            }
	        }
	    }
	    int ans =k;
	    for (int i=0;i<index;i++) {
	        if(ans < (ans ^ finalArray[i])) 
	            ans = ans ^ finalArray[i];
	    }
	    
	    cout <<ans <<endl;
	    
	}
	return 0;
}
