#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {1,3,5,9999,6,6,4,2,3,1};
    auto t = max_element(a.begin(),a.end());
    int maxel = *t;
    cout << maxel;
    return 0;
}