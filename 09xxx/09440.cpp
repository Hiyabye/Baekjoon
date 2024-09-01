#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<char> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  int zero = 0;
  string a = "", b = "";
  for (int i=0; i<n; i++) {
    if (v[i] == '0') zero++;
    else if (i & 1) b += v[i];
    else a += v[i];
  }

  while (zero--) {
    if (stoi(a) > stoi(b)) swap(a, b);
    a = a.substr(0, 1) + "0" + a.substr(1);
  }
  cout << stoi(a) + stoi(b) << "\n";
  
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}