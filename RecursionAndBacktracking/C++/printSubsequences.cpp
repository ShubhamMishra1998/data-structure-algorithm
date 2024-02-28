#include<bits/stdc++.h>
using namespace std;


void printSubsequences(string s1, string s2) {
	if(s1.length()==0) {
		cout<<s2<<'\n';
		return;
	}
	char ch = s1[0];
	string restOfString = s1.substr(1);
	printSubsequences(restOfString, s2+ch);
	printSubsequences(restOfString, s2);
}

int main() {
	string s1;
	cin>>s1;
	sort(s1.begin(),s1.end());
	printSubsequences(s1,"");
}