#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

struct Person {
  string name;
  int score, id;
};

bool cmp(const Person &a, const Person &b) {
  if (a.score >= 100 && b.score >= 100) return a.id < b.id;
  if (a.score != b.score) return a.score > b.score;
  return a.id < b.id;
}

unordered_map<string, int> mp = {
  {"TT", 75}, {"TX", 50}, {"PR", 80},
  {"RT", 30}, {"AP", 25}, {"PX", 60}
};

bool solve(void) {
  int w, n; cin >> w >> n;
  if (w == 0 && n == 0) return false;

  unordered_map<string, pair<int, int>> week;
  for (int i=0; i<n; i++) {
    string s, t; cin >> s >> t;
    if (week.find(s) == week.end()) week[s] = {0, i};
    week[s].first += mp[t];
  }

  vector<Person> v;
  for (auto [s, p] : week) {
    v.push_back({s, p.first, p.second});
  }
  sort(v.begin(), v.end(), cmp);

  for (int i=0; i<v.size(); i++) {
    if (v[i].score < 100) {
      v.resize(i);
      break;
    }
  }

  cout << "Week " << w << " ";
  if (v.empty()) {
    cout << "No phones confiscated\n";
  } else {
    cout << v[0].name;
    for (int i=1; i<v.size(); i++) {
      cout << "," << v[i].name;
    }
    cout << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}