//
// Created by 김민지 on 2022/12/02.
//
#include "iostream"
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int cnt, int start) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = start; i <= n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt+1, i);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0, 1);
}