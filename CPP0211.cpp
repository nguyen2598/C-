#include<bits/stdc++.h>

using namespace std;
int kt(int a[],int n){
int maxx=0;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(a[j]-a[i]>0){
			if(j-i>maxx)maxx=j-i;
			if(maxx>=n-1-i)return maxx;
		}
	}
}
return maxx;
	
}
int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
//vector<int> a(n);
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
cout<<kt(a,n)<<endl;

}
}
