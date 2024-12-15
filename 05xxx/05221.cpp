#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];
  sort(v.begin(), v.end());

  set<string> ans;
  for (int i=0; i<n-2; i++) for (int j=i+1; j<n-1; j++) for (int k=j+1; k<n; k++) {
    if (v[i]*v[i] + v[j]*v[j] != v[k]*v[k]) continue;
    ans.insert("{" + to_string(v[i]) + " " + to_string(v[j]) + " " + to_string(v[k]) + "}");
  }

  if (ans.empty()) {
    cout << "No Pythogorean triples found in the sequence.\n";
  } else {
    cout << "Found Pythogorean triples:  ";
    for (const string &s : ans) cout << s << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}