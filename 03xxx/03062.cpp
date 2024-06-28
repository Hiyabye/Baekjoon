#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string n; cin >> n;
  
  string sum = to_string(stoi(n) + stoi(string(n.rbegin(), n.rend())));
  for (int i=0; i<sum.length()/2; i++) {
    if (sum[i] != sum[sum.length()-i-1]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}