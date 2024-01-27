#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

map<int, string> m = {
  {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"},
  {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}, {0, "zero"}
};

bool cmp(int a, int b) {
  string sa = (a / 10) ? m[a / 10] + " " + m[a % 10] : m[a % 10];
  string sb = (b / 10) ? m[b / 10] + " " + m[b % 10] : m[b % 10];
  return sa < sb;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<int> v;
  for (int i=m; i<=n; i++) v.push_back(i);
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<v.size(); i++) {
    cout << v[i] << " ";
    if (i % 10 == 9) cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}