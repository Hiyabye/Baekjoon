#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);
  
  vector<int> v; int x;
  while (ss >> x) v.push_back(x);

  int ans = 0;
  for (int i=0; i<v.size()-1; i++) {
    for (int j=i+1; j<v.size(); j++) {
      ans = max(ans, gcd(v[i], v[j]));
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  cin.ignore();
  while (n--) solve();
  return 0;
}