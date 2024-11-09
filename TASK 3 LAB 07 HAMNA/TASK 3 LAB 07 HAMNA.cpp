#include <iostream>
using namespace std;
int main() {
    int arr[7];
    int Multiplesoffive = 0;
    cout << "Enter 7 integers:" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] % 5 == 0)
        {
            Multiplesoffive++;
        }
    }
    cout << "Number of multiples of 5: " << Multiplesoffive << endl;
    return 0;
}