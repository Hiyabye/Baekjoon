#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  string s;
  cin >> s;
  vector<string> a;
  for (int i=0; i<s.size(); i++) {
    a.push_back(s.substr(i));
  }

  sort(a.begin(), a.end());

  for (int i=0; i<s.size(); i++) {
    cout << a[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}