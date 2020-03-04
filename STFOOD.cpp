/*All submissions for this problem are available.### Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and Vietnamese as well.

in Chefland, there is a very famous street where N types of street food (numbered 1 through N) are offered. For each valid i, there are Si stores that offer food of the i-th type, the price of one piece of food of this type is Vi (the same in each of these stores) and each day, Pi people come to buy it; each of these people wants to buy one piece of food of the i-th type.

Chef is planning to open a new store at this street, where he would offer food of one of these N types. Chef assumes that the people who want to buy the type of food he'd offer will split equally among all stores that offer it, and if this is impossible, i.e. the number of these people p is not divisible by the number of these stores s, then only ⌊ps⌋ people will buy food from Chef.

Chef wants to maximise his daily profit. Help Chef choose which type of food to offer and find the maximum daily profit he can make.*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll maxProfit=INT_MIN;
	    ll currentProfit;
	    ll s,p,v;
	    for(int i=0;i<n;i++){
	        cin>>s>>p>>v;
	        s=s+1;
	        ll people=p/s;
	        currentProfit=people*v;
	        if(currentProfit>maxProfit){
	            maxProfit=currentProfit;
	        }
	    }
	    cout<<maxProfit<<endl;
	}
	return 0;
}