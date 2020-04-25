/*
Arrays have fallen out of Chef's good books, and he plans to destroy all arrays he possesses.
 He is left with the last array A,
 consisting of N positive integers. In order to destroy the array, he can perform the following 
 2 types of operations any number of times.

Choose any 2 elements, say X and Y, from the given array A such that X != Y, and remove them, or
Choose any 1 element, say X, from A, and remove it.

In order to destroy the array as quickly as possible, Chef is interested in knowing 
the minimum number of operations required to destroy it. Please help him achieve this task.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    map<int,int> numbers;
	    int num;
	    for (int i=0;i<n;i++) {
	        cin>>num;
	        numbers[num]++;
	    }
	    
	    map<int,int>::iterator itr;
	    priority_queue<int> pq;
	    for (itr = numbers.begin();itr!=numbers.end();itr++){
	            pq.push(itr->second);
	    }
	    
	    int cnt = 0;
	    
	    while(pq.top()>0) {
	        int a =pq.top();
	        pq.pop();
	        if(pq.top()>0) {
	            int b = pq.top();
	            pq.pop();
	            pq.push(a-1);
	            pq.push(b-1);
	        }
	        else
	            pq.push(a-1);
	            
	        cnt++;
	    }
	    
	    cout << cnt<<endl;
	}
	return 0;
}
