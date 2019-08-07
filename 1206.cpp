#include<bits/stdc++.h>
using namespace std;
bool prime(int n) {
	if(n==2)return true;
	if(n<2||n%2==0)return false;
	for(int c=3; c*c<=n; c+=2) {
		if(n%c==0)return false;
	} return true;
}
int main() {
	int T;
    cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)cin>>a[i];
		int sum=0;
		for(int i=0; i<n; i++) {
			if(prime(a[i]))sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
