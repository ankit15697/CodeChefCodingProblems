/*
	Chef recently printed directions from his home to a hot new restaurant across the town,
	but forgot to print the directions to get back home.
	Help Chef to transform the directions to get home from the restaurant.
	
 A set of directions consists of several instructions.
 The first instruction is of the form "Begin on XXX", indicating the street that the route begins on.
 Each subsequent instruction is of the form "Left on XXX" or "Right on XXX", indicating a turn onto the specified road.
 When reversing directions, all left turns become right turns and vice versa, 
 and the order of roads and turns is reversed. See the sample input for examples
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    std::vector<string> vec(n) ;
	    vector<string> turn(n);
	    
	    for (int i=0;i<n;i++) {
	        cin>>turn[i];
	        getline(cin,vec[i]);
	    }
	    
	  for(int i=0; i<n; i++){
			if(i==0)
				cout<<"Begin";
			else if(turn[n-i]=="Left")
				cout<<"Right";
			else
				cout<<"Left";
			cout<<vec[n-1-i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
