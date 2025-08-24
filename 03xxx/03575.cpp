#include <iostream>
#include <map>
#include <string>
#include <utility>
using namespace std;

bool solve(void) {
  string s1, s2, t1, t2; cin >> s1 >> s2 >> t1 >> t2;
  int n = s1.size();

  map<pair<char, char>, int> a, b;
  for (int i=0; i<n; i++) {
    a[{s1[i], s2[n-i-1]}]++;
    b[{t1[i], t2[n-i-1]}]++;
  }
  return a == b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}