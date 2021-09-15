#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
long a;
while(t--){
	cin>>a;
	long t= 1;
	for(long i=2;i<=a;i++ )t=(t*i)/__gcd(t,i);
	cout<<t<<endl;
}
	return 0;
}
