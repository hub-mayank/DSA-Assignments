#include "bits/stdc++.h"
// #include <iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
  	int n,h,max,min;
  	cin>>n;
  	vector<int> v(n);
  	for (int i = 0; i < n; i++){
  		cin>>v[i];
  		// int temp;
  		// cin>>temp;
  		// if(temp>=max){
  		// 	max = temp;
  		// }
  		// if(temp<=min){
  		// 	min = temp;
  		// }
  	}
  	max = *max_element(v.begin(),v.end());
  	min = *min_element(v.begin(),v.end());
  	cout<<(max+1)-min<<endl;

  }

  return 0;
}
