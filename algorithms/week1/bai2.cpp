#include <iostream>
using namespace std;

int main() {
    int n, m;
    
    std::cin >> n;
    std::cin >> m;
    long result = 1;
    for (int i = 0; i < n; i++) {
        if (n & (1 << i)) {
        result *= m;
        }
        result %= 2;
    }

    cout << result << endl;
}