/*
	Alice has learnt factorization recently. Bob doesn't think she has learnt it properly
	and hence he has decided to quiz her. Bob gives Alice a very large
	number and asks her to find out the number of factors of that number.
	To make it a little easier for her, he represents the number as a product of N numbers.
	Alice is frightened of big numbers and hence is asking you for help. Your task is simple. 
	Given N numbers, you need to tell the number of distinct factors of the product of these N numbers.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define MAX 1000000
int primeList[MAX+1];
int k = 0;
void sieve(){
   
    bool prime[MAX+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=MAX; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=MAX; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=MAX; p++) 
       if (prime[p]) 
         primeList[k++] = p;
}

int main() {
	// your code goes here
	
	int t;
	sieve();
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    std::vector<int> factors(n) ;
	    
	    for(int i=0;i<n;i++) {
	        cin>>factors[i];
	    }
	    
	    map<int,int> distinctPrime;
	    
	    for (int i = 0; i <n;i++) {
	        for (int j = 0;j<k;j++) {
	            while(factors[i]>1 && factors[i]%primeList[j] == 0) {
	                factors[i] = factors[i]/primeList[j];
	                
	                if(distinctPrime.find(primeList[j]) == distinctPrime.end()){
	                    distinctPrime.insert(make_pair(primeList[j], 1));
	                }
	                else {
	                    distinctPrime[primeList[j]] ++;
	                }
	            }
	        }
	    }
	    map<int,int>::iterator it;
		ll ans=1;
		for(it=distinctPrime.begin();it!=distinctPrime.end();++it)
			ans*=((*it).second+1LL);
		
		cout <<ans <<endl;
	}
	return 0;
}
