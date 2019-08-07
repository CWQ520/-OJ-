#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[1001];
	gets(a);
	int len=strlen(a);
	for(int i=0; i<len; i++) {
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') {
			cout<<a[i];
		} else if(a[i]==' ') {
			cout<<endl;
		}
	}
	return 0;
}
