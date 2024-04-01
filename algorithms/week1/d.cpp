#include <iostream>
using namespace std;

bool isLuckyNumber(int number) {
    while (number != 0)
    {
        int lastDigit = number % 10;
        if (lastDigit != 4 || lastDigit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
    
}

int getSumNumber(int n) {
    int sum = 0;
    while (n != 0)
    {
        sum++;
        n /= 10;
    }
    return sum;
}

// count number
// check the count is a lucky number
int main() {
    int number;
    cin >> number;
    int sumNumber = getSumNumber(number);
    cout << "sum Number: ";
    cout << sumNumber << endl;
    if (isLuckyNumber(number)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
}
