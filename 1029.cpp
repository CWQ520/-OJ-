#include<bits/stdc++.h>
using namespace std;
int main() {
	double U,D,H;
	cin>>U>>D>>H;
	cout<<fixed<<setprecision(2)<<(U+D)*H/2<<endl<<U+D+sqrt(H*H+(D-U)*(D-U)/4)*2;
	return 0;
}
