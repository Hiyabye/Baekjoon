#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  vector<string> v;
  stringstream ss(s); string t;
  while (ss >> t) v.push_back(t);
  string u; cin >> u;
  int n; cin >> n;
  cin.ignore();

  int idx = distance(v.begin(), find(v.begin(), v.end(), u));
  cout << v[(idx + n - 1) % v.size()] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  while (t--) solve();
  return 0;
}