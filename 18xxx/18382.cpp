#include <bits/stdc++.h>
using namespace std;

int s;
string m;
vector<vector<int> > a(4, vector<int>(4));

void up(void) {
  for (int i=1; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k > 0 && a[k-1][j] == 0) {
        a[k-1][j] = a[k][j];
        a[k][j] = 0;
        k--;
      }
    }
  }
  for (int i=1; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i-1][j]) continue;
      a[i-1][j] *= 2;
      s += a[i-1][j];
      a[i][j] = 0;
    }
  }
  for (int i=1; i<4; i++) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k > 0 && a[k-1][j] == 0) {
        a[k-1][j] = a[k][j];
        a[k][j] = 0;
        k--;
      }
    }
  }
}

void down(void) {
  for (int i=2; i>=0; i--) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < 3 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
  for (int i=2; i>=0; i--) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i+1][j]) continue;
      a[i+1][j] *= 2;
      s += a[i+1][j];
      a[i][j] = 0;
    }
  }
  for (int i=2; i>=0; i--) {
    for (int j=0; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < 3 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
}

void left(void) {
  for (int i=0; i<4; i++) {
    for (int j=1; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k > 0 && a[i][k-1] == 0) {
        a[i][k-1] = a[i][k];
        a[i][k] = 0;
        k--;
      }
    }
  }
  for (int i=0; i<4; i++) {
    for (int j=1; j<4; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j-1]) continue;
      a[i][j-1] *= 2;
      s += a[i][j-1];
      a[i][j] = 0;
    }
  }
  for (int i=0; i<4; i++) {
    for (int j=1; j<4; j++) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k > 0 && a[i][k-1] == 0) {
        a[i][k-1] = a[i][k];
        a[i][k] = 0;
        k--;
      }
    }
  }
}

void right(void) {
  for (int i=0; i<4; i++) {
    for (int j=2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < 3 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
  for (int i=0; i<4; i++) {
    for (int j=2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j+1]) continue;
      a[i][j+1] *= 2;
      s += a[i][j+1];
      a[i][j] = 0;
    }
  }
  for (int i=0; i<4; i++) {
    for (int j=2; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < 3 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
}

void solve(void) {
  cin >> s;
  cin >> m;
  for (int i=0; i<4; i++) {
    for (int j=0; j<4; j++) {
      cin >> a[i][j];
    }
  }

  for (int i=0; i<m.length()/4; i++) {
    switch (m[i*4]) {
      case 'U': up(); break;
      case 'D': down(); break;
      case 'L': left(); break;
      case 'R': right(); break;
    }
    a[m[i*4+2]-'0'][m[i*4+3]-'0'] = m[i*4+1]-'0';
  }
  
  cout << s;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}