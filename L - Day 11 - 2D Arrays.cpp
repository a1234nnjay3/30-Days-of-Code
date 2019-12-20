#include <bits/stdc++.h>
#include <cstdarg>
#include <cmath>

using namespace std;

int sum(int num_args, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, num_args);
    for (int i = 0; i < num_args; i++) {
        int num = va_arg(args, int);
        sum += num;
    }
    va_end(args);
    return sum;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max_hourglass= -9*7;
    for (int i=0; i<4; i++){
        for (int j=0;j<4;j++){
            int hourglass = sum(7,arr[i][j],arr[i][j+1],arr[i][j+2],arr[i+1][j+1],arr[i+2][j],arr[i+2][j+1],arr[i+2][j+2]);
            max_hourglass = max(max_hourglass,hourglass);
        }
    }
    cout << max_hourglass;
    return 0;
}
