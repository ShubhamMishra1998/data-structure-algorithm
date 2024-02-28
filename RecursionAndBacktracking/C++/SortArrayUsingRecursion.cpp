#include<bits/stdc++.h>
using namespace std;
int findMin(int *a, int idx, int n) {
	if(idx == n-1) n-1;
	int res = findMin(a,idx+1,n);
	if(a[res]<a[idx]){
		return res;
	}else{
		return idx;
	}
}
void sortArray(int *a, int n,int i) {
	if(i==n) {
		return;
	}

	int idx = findMin(a,i+1,n);
	if(a[idx]<a[i]) {
		swap(a[idx],a[i]);
	}
	sortArray(a,n,i+1);
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	sortArray(a,n,0);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<' ';
	}
}