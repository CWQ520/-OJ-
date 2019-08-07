#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int tot=0;
	for(int i=m;i<n;i++){
	    if(i%3==0&&i%5==0)tot++;
	}
	cout<<tot<<endl;
	return 0;
}
