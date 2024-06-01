#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<char, int> mp = {
  {'A', 3}, {'B', 2}, {'C', 1}, {'D', 2}, {'E', 3},
  {'F', 3}, {'G', 3}, {'H', 3}, {'I', 1}, {'J', 1},
  {'K', 3}, {'L', 1}, {'M', 3}, {'N', 3}, {'O', 1},
  {'P', 2}, {'Q', 2}, {'R', 2}, {'S', 1}, {'T', 2},
  {'U', 1}, {'V', 1}, {'W', 2}, {'X', 2}, {'Y', 2},
  {'Z', 1}
};

vector<int> calc(const vector<int> &v) {
  vector<int> ret;
  for (int i=1; i<v.size(); i+=2) ret.push_back((v[i-1] + v[i]) % 10);
  if (v.size() & 1) ret.push_back(v.back());
  return ret;
}

bool solve(void) {
  string s; cin >> s;

  vector<int> v;
  for (char c : s) v.push_back(mp[c]);
  while (v.size() > 1) v = calc(v);

  return v[0] & 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "I'm a winner!" : "You're the winner?");
  return 0;
}