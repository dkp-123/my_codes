#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, p=2, np=1, lul, s;
	cin>>n;
	s=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(max(i-s, s-i)+max(j-s, s-j)<=s){
				cout<<np<<" ";
				np+=2;
			}
			else{
				cout<<p<<" ";
				p+=2;
			}
		}
		cout<<endl;
		
	}
	return 0;
}