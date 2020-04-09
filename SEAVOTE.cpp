/*
	Sereja conducted a voting about N of his opinions. Ai percent of people voted for opinion number i. 
	This statistics is called valid if sum of all Ai is equal to 100.

Now let us define rounding up of a statistics A.

If Ai is not an integer, it will be rounded up to next integer.
Otherwise it will be left as it is.
e.g. 4.1 became 5, 4.9 became 5 but 6 will still be 6.
Now let us consider a statistics B of size N in which each of Bi is an integer. 
Now he wants to know whether there exists some valid statistic A of size N (may contain real numbers)
 such that after rounding it up, it becomes same as B?
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int sum = 0;
	    int number;
	    int z = 0;
	    while(n--) {
	        cin>>number;
	        sum+=number;
	        if (number > 0 )
	            z++;
	    }
	    
	    if (sum < 100 || sum > 100 + z - 1){
	        cout <<"NO\n";
	    }
	    else {
	        cout <<"YES\n";
	    }
	}
	return 0;
}
