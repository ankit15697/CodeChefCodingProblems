#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x,y;
	cin>>n>>x>>y;
	std::vector<int> al(n);
	vector<int> bo(n) ;
	
	for (int i = 0; i<n;i++)
	    cin>>al[i];
	
	for (int i = 0; i<n;i++)
	    cin>>bo[i];
	    
    sort(al.begin(), al.end(), greater<int>());
    
    sort(bo.begin(),bo.end(),greater<int>());
    
    int sum=0;
    int i=0,j=0;
    int cnt =0;
    while((i<x && j < y) && cnt < n) {
        if(al[i] > bo[j]) {
            sum+=al[i];
            i++;
            cnt++;
        }
        else {
            sum+=bo[j];
            j++;
            cnt++ ;
        }
    }
    while(i<x && cnt<n) {
            sum+=al[i];
            i++;
            cnt++;
    }
     while(j<y && cnt<n) {
            sum+=bo[j];
            j++;
            cnt++;
    }
    
    cout << sum<<endl;
    
	return 0;
}
