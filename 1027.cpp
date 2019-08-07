#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    int a=n/100;
    int b=(n/10)%10;
    int c=n%10;
    if(a*a*a+b*b*b+c*c*c==n) return true;
    else return false;
}
int main(){
	int n;
	while(cin>>n){
	    if(n==0)break;
	    if(prime(n))cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	
	return 0;
}
