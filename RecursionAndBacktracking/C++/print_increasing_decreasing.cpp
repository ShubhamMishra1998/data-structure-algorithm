#include<bits/stdc++.h>
using namespace std;
void printIncreasing(int n) {
	if(n==0) return;
	printIncreasing(n-1);
	cout<<n<<'\n';
}

void printDecreasing(int n) {
	if(n==0) return;
	cout<<n<<'\n';
	printDecreasing(n-1);
}

int main() {
	int n;
	cin>>n;
	printIncreasing(n);
	cout<<"-----------------------------------"<<'\n';
	printDecreasing(n);

}