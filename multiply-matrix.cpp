#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main() {

    int n, m, r;

    cin >> m >> r >> n;

    int a[m][r], b[r][n], c[m][n];

    int i, j, k;

    for(i = 0; i < m; i++){
        for(j = 0; j < r; j++){
            cin >> a[i][j];
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            c[i][j] = 0;
        }
    }

    cout << "\n";

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            for(k = 0; k < r; k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
