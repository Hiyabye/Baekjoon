#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);
  vector<long long> v; long long x;
  while (ss >> x) v.push_back(x);

  for (int i=0; i<4; i++) {
    if (v[i] != i) return false;
    if (i+1 == v.size()) return true;
  }
  for (int i=4; i<v.size(); i++) {
    if (v[i] != v[i-1] + v[i-2] + v[i-3] + v[i-4]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; cin.ignore();
  while (n--) cout << (solve() ? "NAUTILUS" : "SNAIL") << "\n";
  return 0;
}