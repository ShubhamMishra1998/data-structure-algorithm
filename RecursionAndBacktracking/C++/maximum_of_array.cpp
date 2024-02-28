#include<bits/stdc++.h>
using namespace std;
int maxOfArray(int *a, int i,int n) {
	if(i==n) {
		return INT_MIN;
	}

	int mx = maxOfArray(a,i+1,n);
	return max(mx, a[i]);
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int ans = maxOfArray(a,0,n);
	cout<<ans<<'\n';
}