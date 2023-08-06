#include <bits/stdc++.h>
using namespace std;

void up(vector<vector<long long> > &a) {
  for (int i=1; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k > 0 && a[k-1][j] == 0) {
        a[k-1][j] = a[k][j];
        a[k][j] = 0;
        k--;
      }
    }
  }
  for (int i=1; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i-1][j]) continue;
      a[i-1][j] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=1; i<8; i++) {
    for (int j=0; j<8; j++) {
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

void down(vector<vector<long long> > &a) {
  for (int i=6; i>=0; i--) {
    for (int j=0; j<8; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < 7 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
  for (int i=6; i>=0; i--) {
    for (int j=0; j<8; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i+1][j]) continue;
      a[i+1][j] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=6; i>=0; i--) {
    for (int j=0; j<8; j++) {
      if (a[i][j] == 0) continue;
      int k = i;
      while (k < 7 && a[k+1][j] == 0) {
        a[k+1][j] = a[k][j];
        a[k][j] = 0;
        k++;
      }
    }
  }
}

void left(vector<vector<long long> > &a) {
  for (int i=0; i<8; i++) {
    for (int j=1; j<8; j++) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k > 0 && a[i][k-1] == 0) {
        a[i][k-1] = a[i][k];
        a[i][k] = 0;
        k--;
      }
    }
  }
  for (int i=0; i<8; i++) {
    for (int j=1; j<8; j++) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j-1]) continue;
      a[i][j-1] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=0; i<8; i++) {
    for (int j=1; j<8; j++) {
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

void right(vector<vector<long long> > &a) {
  for (int i=0; i<8; i++) {
    for (int j=6; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < 7 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
  for (int i=0; i<8; i++) {
    for (int j=6; j>=0; j--) {
      if (a[i][j] == 0) continue;
      if (a[i][j] != a[i][j+1]) continue;
      a[i][j+1] *= 2;
      a[i][j] = 0;
    }
  }
  for (int i=0; i<8; i++) {
    for (int j=6; j>=0; j--) {
      if (a[i][j] == 0) continue;
      int k = j;
      while (k < 7 && a[i][k+1] == 0) {
        a[i][k+1] = a[i][k];
        a[i][k] = 0;
        k++;
      }
    }
  }
}

void solve(void) {
  vector<vector<long long> > a(8, vector<long long>(8));
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      cin >> a[i][j];
    }
  }

  char c;
  cin >> c;
  switch (c) {
    case 'U': up(a); break;
    case 'D': down(a); break;
    case 'L': left(a); break;
    case 'R': right(a); break;
  }

  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}