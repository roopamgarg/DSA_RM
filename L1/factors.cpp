#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;
void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
  #ifndef ONLINE_JUDGE
      freopen("in", "r", stdin);
      freopen("out", "w", stdout);
  #endif
}
int32_t main()
{
  file_i_o();
  /////////////
  int n;
  cin>>n;
  vector<int> factors;
  for(int i = 1; i*i <= n; i++){
      if(n%i == 0){
          factors.push_back(i);
      }
  }  
  int size = factors.size();
  for(int i = size - 1; i >= 0 ;i--){
      if(factors[i] * factors[i] == n) continue;
      factors.push_back(n/factors[i]);
  }
  for(int i = 0; i < factors.size(); i++){
      cout<<factors[i]<<" ";
  }
}