/*
In Wolf town there are 2 big markets S and T. The distance between these markets is D. 
Chef Ciel would like to run 2 restaurants in Wolf town, where the first restaurant 
will be supplied by the market S and the second one will be supplied by the market T.
 The markets run delivery service without charge within some distance, DS and DT respectively. 
 Near these markets there are many rival restaurants.
 So Ciel decides to build one of her restaurants exactly at the distance DS from the market S, 
and build the other restaurant exactly at the distance DT from the market T.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int ds,dt,d;
	    cin>>ds>>dt>>d;
	    
	  cout <<max(0,max(dt-ds-d,max(ds-d-dt,d-ds-dt)))<<endl;
	}
	return 0;
}
