#include<bits/stdc++.h>
using namespace std;
int G(int n) {
	int sum=0;
	while(n>0) {
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main() {
	int n;
	while(cin>>n) {
		if(n%G(n)==0)cout<<"Lucky Word"<<endl;
		else cout<<"No Answer"<<endl;
	}
	return 0;
}
