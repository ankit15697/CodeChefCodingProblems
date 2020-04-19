/*
 When Varsha was travelling home, she saw a mysterious villa. 
 Varsha is curious about this strange villa and wants to explore it. 
 When she reached the entry gate, the guard gave her a problem to solve and 
 said that he would allow her to enter the villa only if she solved it.

The guard gave Varsha two integers X and K. 
Varsha needs to determine whether there is an integer A such that 
it has exactly X positive integer divisors and exactly K of them are prime numbers.

Varsha found this problem really hard to solve. Can you help her?
*/

#include <bits/stdc++.h>
using namespace std;
int factors(int n) {
    int cnt = 0;
    for(int i=2;i<=sqrt(n);i++) {
        while(n%i==0) {
            n = n/i;
            cnt++;
        }
    }
    if(n>1) {
        cnt++;
    }
    
    return cnt;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    if(factors(n) >= k) {
	        cout << "1\n";
	    }
	    else{
	        cout <<"0\n";
	    }
	}
	return 0;
}
