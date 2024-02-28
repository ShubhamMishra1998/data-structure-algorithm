#include<bits/stdc++.h>
using namespace std;
void printEncodings(string s1, string s2)
{
	if(s1.length() == 0) {
		cout<<s2<<'\n';
		return;
	}

	if(s1[0]=='0')return;
	int firstCharValue = s1[0]-'0';
	char firstChar = (firstCharValue-1)+'a';
	printEncodings(s1.substr(1), s2+firstChar);
	if(s1.length()>1) {
		int value = stoi(s1.substr(0,2));
		if(value<27){
			char secondValue = (value-1)+'a';
			printEncodings(s1.substr(2),s2+secondValue);
		}
	}
}
int main() {
	string s1;
	cin>>s1;
	printEncodings(s1,"");
}