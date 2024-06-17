#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "NHAP SO: ";
    cin >> number;

    cout << "BANG CUU CHUONG " << number << "\n";

    for (int n = 2; n <= 9; n++) {

        for (int i = 1; i <= 10; ++i)
        {
            cout << number << " x " << i << " = " << (n * i) << "\n";
        }

        return 0;
    }
}
