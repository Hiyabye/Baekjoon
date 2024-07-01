#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=1; i<n; i++) cin >> v[i];

  unordered_map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    mp[s] = i;
  }
  string a, b; cin >> a >> b;

  cout << "Data Set " << idx << ":\n" << v[abs(mp[b] - mp[a])] << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}