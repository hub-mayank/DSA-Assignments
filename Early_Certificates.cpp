#include "bits/stdc++.h"
// #include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	  int n,m;
	  string A,B,ans="";
	  cin>>n>>m;
	  cin>>A;
	  cin>>B;
	  for(int i = 0; i < min(n,m);i++){
	  	if(A[i]==B[i]){
	  		ans+=A[i];
	  	}
	  	else break;
	  }
	  cout<<ans<<endl;

	}
  return 0;
}
