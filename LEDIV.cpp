/*
	The Little Elephant from the Zoo of Lviv has an array A that consists of N positive integers. 
	Let A[i] be the i-th number in this array (i = 1, 2, ..., N).

Find the minimal number x > 1 such that x is a divisor of all integers from array A.
 More formally, this x should satisfy the following relations:

A[1] mod x = 0, A[2] mod x = 0, ..., A[N] mod x = 0,

where mod stands for the modulo operation. For example, 8 mod 3 = 2, 2 mod 2 = 0, 100 mod 5 = 0 and so on. 
If such number does not exist, output -1.
*/
#include <bits/stdc++.h>
using namespace std;
int smallest(int n) {
    
    if(n<2) {
        return -1;
    }
    for (int i = 2; i <=sqrt(n);i++) {
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	     
	    std::vector<int> vec(n) ;
	    
	    for(int i=0;i<n;i++)
	        cin>>vec[i];
	        
	     int gc = vec[0];
	     for(int i=1;i<n;i++)
	        gc = __gcd(gc,vec[i]);
	     
	     cout << smallest(gc) <<endl;
	    
	}
	return 0;
}
