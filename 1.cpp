#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n  = 0;
    cout << "Enter the value" << endl;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int g = 0;
        cin >> g;
        a.push_back(g);
    }
    auto t = max_element(a.begin(),a.end());
    int maxel = *t;
    cout << maxel << '\n';
    return 0;
}