#include <bits/stdc++.h>
using namespace std;
typedef long long int I64b;
queue<int> dp;
int        n, m, matrix[501][501], res, memo[100006];
bool primo[100006];

void criba() {
  for (int i = 2; i <= 100005; i++) {
    if (!primo[i]) {
      dp.push(i);
      for (int j = i * 2; j <= 100005; j += i) {
        primo[j] = 1;
      }
    }
  }
}


int main() {
  cin.tie();
  ios_base::sync_with_stdio(0);
  cin >> n >> m;

  criba();
  primo[1] = 1;
  int z = 0;
  while (dp.size() > 0 && z < 100005) {
    if (z <= dp.front()) {
      memo[z] = dp.front() - z;
      z++;
    } else {
      dp.pop();
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }
  res = 100005;
  for (int i = 0; i < n; i++) {
    int mov = 0;
    for (int j = 0; j < m; j++) {
      mov += memo[matrix[i][j]];
    }
    res = min(res, mov);
  }
  for (int i = 0; i < m; i++) {
    int mov = 0;
    for (int j = 0; j < n; j++) {
      mov += memo[matrix[j][i]];
    }
    res = min(mov, res);
  }
  cout << res;
  return(0);
} // main