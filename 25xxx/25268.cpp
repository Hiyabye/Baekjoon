#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  const string vow = "aeiou";
  const string con = "bcdfghjklmnpqrstvwxyz";

  vector<string> v;
  for (char a : con) for (char b : vow) for (char c : con) for (char d : con) {
    v.push_back(string(1, a) + string(1, b) + string(1, c) + string(1, d));
  }

  for (int i=0; i<n; i++) {
    cout << v[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}