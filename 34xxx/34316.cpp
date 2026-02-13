#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

inline long long calc1(int n, int m, const vector<vector<int>> &a) {
  long long ret = 0;
  for (int x1=0; x1<n-1; x1++) for (int x2=x1+1; x2<n; x2++) {
    unordered_map<int, long long> mp;
    for (int y=0; y<m; y++) {
      int s = a[x1][y] + a[x2][y];
      if (mp.count(20-s)) ret += mp[20-s];
      mp[s]++;
    }
  }
  return ret;
}

inline long long calc2(int n, int m, const vector<vector<int>> &a) {
  long long ret = 0;
  for (int y1=0; y1<m-1; y1++) for (int y2=y1+1; y2<m; y2++) {
    unordered_map<int, long long> mp;
    for (int x=0; x<n; x++) {
      int s = a[x][y1] + a[x][y2];
      if (mp.count(20-s)) ret += mp[20-s];
      mp[s]++;
    }
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  cout << (n < m ? calc1(n, m, a) : calc2(n, m, a));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}