#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> v;
vector<bool> visited(10, false);

inline int c2i(char c) { return c - '0'; }

string backtrack1(string s, int k) {
  if (s.length() == k+1) return s;
  for (int i=9; i>=0; i--) {
    if (visited[i]) continue;
    if (s.length() == 0 || (v[s.length()-1] == '<' && c2i(s.back()) < i) || (v[s.length()-1] == '>' && c2i(s.back()) > i)) {
      visited[i] = true;
      string ret = backtrack1(s + to_string(i), k);
      if (ret != "") return ret;
      visited[i] = false;
    }
  }
  return "";
}

string backtrack2(string s, int k) {
  if (s.length() == k+1) return s;
  for (int i=0; i<=9; i++) {
    if (visited[i]) continue;
    if (s.length() == 0 || (v[s.length()-1] == '<' && c2i(s.back()) < i) || (v[s.length()-1] == '>' && c2i(s.back()) > i)) {
      visited[i] = true;
      string ret = backtrack2(s + to_string(i), k);
      if (ret != "") return ret;
      visited[i] = false;
    }
  }
  return "";
}

void solve(void) {
  int k; cin >> k;
  v.resize(k);
  for (int i=0; i<k; i++) cin >> v[i];

  cout << backtrack1("", k) << "\n";
  visited.assign(10, false);
  cout << backtrack2("", k);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}