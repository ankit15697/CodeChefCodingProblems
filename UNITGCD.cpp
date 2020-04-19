/*
 Chef has a recipe book. He wishes to read it completely as soon as
 possible so that he could try to cook the dishes mentioned in the book.

The pages of the book are numbered 1 through N. Over a series of days, 
Chef wants to read each page. On each day, Chef can choose to read any set of pages such that
 there is no prime that divides the numbers of two or more of these pages, i.e. 
 the numbers of pages he reads on the same day must be pairwise coprime. For example,
 Chef can read pages 1, 3 and 10 on one day, since (1,3), (3,10) and (1,10) are pairs of coprime integers; 
 however, he cannot read pages 1, 3 and 6 on one day, as 3 and 6 are both divisible by 3.
 Since chef might get bored by reading the same recipe again and again, Chef will read every page exactly once.

Given N, determine the minimum number of days Chef needs to read the entire book and the pages Chef should read on each of these days.


*/

#include <bits/stdc++.h>
using namespace std;

void printResult(int n) {
    if(n==1) {
        cout <<"1\n";
        cout <<"1 1\n";
    }
    else{
        cout <<n/2 <<'\n';
        if(n%2!=0) {
            cout <<"3 1 2 "<<n<<'\n';
        }
        else {
            cout << "2 1 2\n";
        }
        for(int i=3;i<n;i+=2) {
            cout<<"2 " <<i <<" "<<i+1<<'\n';
        }
    }
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
	cin.tie(0);	
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    printResult(n);
	}
	return 0;
}
