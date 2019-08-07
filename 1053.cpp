#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n--) {
		string a;
		cin>>a;
		int len=a.length();
		int  s1=0, s2=0, s3=0, s4=0;
		for(int i=0; i<a.length(); i++) {
			if(a[i]>='a'&&a[i]<='z') {
				s1++;
			} else if(a[i]>='A'&&a[i]<='Z') {
				s2++;
			} else if(a[i]>='0'&&a[i]<='9') {
				s3++;
			} else if(a[i]=='~'||a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^') {
				s4++;
			}
		}
		if(len<=16&&len>=8&&((s1!=0&&s2!=0&&s3!=0)||(s1!=0&&s2!=0&&s4!=0)||(s1!=0&&s3!=0&&s4!=0)||(s2!=0&&s3!=0&&s4!=0)||(s1!=0&&s2!=0&&s3!=0&&s4!=0))) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
