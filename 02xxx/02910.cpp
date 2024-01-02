#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, pair<int, int> > &a, pair<int, pair<int, int> > &b) {
  if (a.second.first == b.second.first) return a.second.second < b.second.second;
  return a.second.first > b.second.first;
}

void solve(void) {
  int n, c; cin >> n >> c;

  map<int, pair<int, int> > mp;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    if (mp.find(x) == mp.end()) mp[x] = make_pair(1, i);
    else mp[x].first++;
  }

  vector<pair<int, pair<int, int> > > v;
  for (auto it=mp.begin(); it!=mp.end(); it++) {
    v.push_back(make_pair(it->first, make_pair(it->second.first, it->second.second)));
  }
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<v.size(); i++) {
    for (int j=0; j<v[i].second.first; j++) cout << v[i].first << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}