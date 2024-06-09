#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef struct {
  int g, s, b;
  string c;
} Country;

bool cmp(const Country &a, const Country &b) {
  if (a.g != b.g) return a.g < b.g;
  if (a.s != b.s) return a.s < b.s;
  return a.b < b.b;
}

void solve(void) {
  int n; cin >> n;
  vector<Country> v(n);
  for (int i=0; i<n; i++) {
    cin >> v[i].g >> v[i].s >> v[i].b; cin.ignore();
    getline(cin, v[i].c);
  }

  cout << max_element(v.begin(), v.end(), cmp)->c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}