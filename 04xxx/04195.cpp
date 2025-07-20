#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> parent, sz;

void init_dsu(int n) {
  parent.resize(n);
  sz.resize(n);
  for (int i=0; i<n; i++) {
    parent[i] = i;
    sz[i] = 1;
  }
}

int find_set(int v) {
  if (v == parent[v]) return v;
  return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
  a = find_set(a);
  b = find_set(b);
  if (a != b) {
    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
  }
}

void solve(void) {
  int f; cin >> f;
  init_dsu(2 * f);

  int id = 0;
  unordered_map<string, int> mp;
  while (f--) {
    string s, t; cin >> s >> t;
    if (mp.find(s) == mp.end()) mp[s] = id++;
    if (mp.find(t) == mp.end()) mp[t] = id++;
    union_sets(mp[s], mp[t]);
    cout << sz[find_set(mp[s])] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}