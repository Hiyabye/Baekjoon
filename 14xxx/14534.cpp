#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  string s; cin >> s;
  vector<int> v(s.length());
  for (int i=0; i<s.length(); i++) v[i] = i;

  cout << "Case # " << idx << ":\n";
  do {
    for (int i=0; i<s.length(); i++) cout << s[v[i]];
    cout << "\n";
  } while (next_permutation(v.begin(), v.end()));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}