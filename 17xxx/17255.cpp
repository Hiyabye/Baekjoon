#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct hash_fn {
  size_t operator()(const vector<string>& v) const {
    size_t h = 0;
    for (const string& x : v) {
      for (char c : x) {
        h = h * 31 + c;
      }
    }
    return h;
  }
};

string n;
unordered_set<vector<string>, hash_fn> s;

void backtrack(int l, int r, vector<string> cur) {
  if (l == 0 && r == n.length()-1) {
    s.insert(cur);
    return;
  }

  if (l > 0) {
    vector<string> nxt = cur;
    nxt.push_back(n.substr(l-1, 1) + cur.back());
    backtrack(l-1, r, nxt);
  }
  if (r < n.length()-1) {
    vector<string> nxt = cur;
    nxt.push_back(cur.back() + n.substr(r+1, 1));
    backtrack(l, r+1, nxt);
  }
}

void solve(void) {
  cin >> n;

  for (int i=0; i<n.length(); i++) {
    backtrack(i, i, {n.substr(i, 1)});
  }
  cout << s.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}