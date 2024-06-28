#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> find(vector<vector<int> > &a, int x) {
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      if (a[i][j] == x) return make_pair(i, j);
    }
  }
  return make_pair(-1, -1);
}

int score(vector<vector<bool> > &check) {
  int ret = 0;
  bool flag = true;

  for (int i=0; i<5; i++) {
    flag = true;
    for (int j=0; j<5; j++) {
      if (!check[i][j]) {
        flag = false;
        break;
      }
    }
    if (flag) ret++;
    flag = true;
    for (int j=0; j<5; j++) {
      if (!check[j][i]) {
        flag = false;
        break;
      }
    }
    if (flag) ret++;
  }

  flag = true;
  for (int i=0; i<5; i++) {
    if (!check[i][i]) {
      flag = false;
      break;
    }
  }
  if (flag) ret++;

  flag = true;
  for (int i=0; i<5; i++) {
    if (!check[i][4-i]) {
      flag = false;
      break;
    }
  }
  if (flag) ret++;

  return ret;
}

void solve(void) {
  vector<vector<int> > a(5, vector<int>(5));
  vector<vector<bool> > check(5, vector<bool>(5, false));
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      cin >> a[i][j];
    }
  }

  int tmp;
  for (int i=0; i<25; i++) {
    cin >> tmp;
    pair<int, int> pos = find(a, tmp);
    check[pos.first][pos.second] = true;
    if (score(check) >= 3) {
      cout << i+1;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}