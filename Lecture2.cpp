#include <iostream>
using namespace std;

int findmax(int sale[5]);
int total(int sale[5]);
int below(int sale[5]);
void show(int sale[5]);

int main() {
    int sale[5], sum = 0, max, low;

    for (int i = 0; i < 5; i++) {
        cout << "Enter sale of day " << i + 1 << ": ";
        cin >> sale[i];
    }

    max = findmax(sale);
    cout << "Maximum sale is " << max << endl;

    sum = total(sale);
    cout << "Total sales of 5 days are " << sum << endl;

    cout << "Sales below 5000 are:" << endl;
    low = below(sale);
    cout << "Number of days with sales below 5000: " << low << endl;

    cout << "All sales of 5 days are:" << endl;
    show(sale);

    return 0;
}

int findmax(int sale[5]) {
    int max = sale[0], a = 1;
    for (int i = 1; i < 5; i++) {
        if (sale[i] > max) {
            max = sale[i];
            a = i + 1;
        }
    }
    cout << "Maximum sale is on day " << a << endl;
    return max;
}

int total(int sale[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += sale[i];
    }
    return sum;
}

int below(int sale[5]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (sale[i] < 5000) {
            cout << "Day " << i + 1 << " has sale " << sale[i] << endl;
            count++;
        }
    }
    return count;
}

void show(int sale[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Day " << i + 1 << ": " << sale[i] << endl;
    }
}