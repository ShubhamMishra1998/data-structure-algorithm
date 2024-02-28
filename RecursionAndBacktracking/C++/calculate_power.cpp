#include<bits/stdc++.h>
using namespace std;
int calulateLinearPower(int x, int n) {
	if(n==0)return 1;
	return x * calulateLinearPower(x,n-1);

}

int calculatePowerLograthmicTime(int x,int n) {
	if(n==0) return 1;
	if(n%2==0) {
       int res = calculatePowerLograthmicTime(x,n/2);
       return res * res;
	}else{
		return x*calculatePowerLograthmicTime(x,n-1);
	}
}

int calculatePowerIterative(int x,int n) {
	int res = 1;
	while(n>0) {
		if(n%2==1) {
			res = res * x;
		}
		x = x*x;
		n/=2;
	}
	return res;
}

int main() {
	int x,n;
	cin>>x>>n;
	cout<<calculatePowerIterative(x,n);
}