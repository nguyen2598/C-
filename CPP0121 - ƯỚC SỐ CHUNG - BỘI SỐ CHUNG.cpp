#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
long a,b;
for(int i=0;i<t;i++){
	long d,m;
cin>>a>>b;
	long x=a,y=b;
	while(a%b!=0){
		 d=a%b;
		a=b;
		b=d;
	
	}
cout<<(x*y)/b<<" "<<b;
	cout<<endl;
}


	return 0;
}



