#include<bits/stdc++.h>
using namespace std;
int read_text(){
	int x;cin>>x;return x;
}
int main(){
	int n=read_text();
	int a[n];
	int c;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+10);
	c=unique(a,a+n)-a;
	cout<<c<<endl;
	for(int i=0;i<c;i++)cout<<a[i]<<" ";
	return 0;
} 
