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
// int32_t main()
// {
//   file_i_o();

//   int n;
//   cin>>n;
//   int prime_factors[n], powers[n];  
//   for(int i = 0; i < n; i++){
//       cin>>prime_factors[i];// number
//       cin>>powers[i];// number
//   }
//   int res = 1;
//   for(int i = 0; i < n; i++){
//       res *= (powers[i] + 1);
//   }  
//   cout<<res;
// }


int32_t main()
{
  file_i_o();

  int n;
  cin>>n;
  int prime_factors[n];
  vector<int> count;  // 0
  for(int i = 0; i < n; i++){
      cin>>prime_factors[i];// number
  }

  for(int i = 0; i < n; i++){
      if(i == 0){
          count.push_back(1); // 1
      }
      else if(prime_factors[i] == prime_factors[i-1]){
          int last_index = count.size() - 1;
          count[last_index]++;
      }else if(prime_factors[i] != prime_factors[i-1]){
          count.push_back(1);
      }
  }
  int res = 1;
  for(int i = 0; i < count.size(); i++){
      res *= (count[i] + 1);
  }  
  cout<<res;
}