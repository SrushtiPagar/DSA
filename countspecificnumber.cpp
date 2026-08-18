#include <iostream>
using namespace std;

int CountSpecificNumbers(int m, int n)
{
    int count = 0;

    for (int i = m; i <= n; i++) {
        int num = i;
        bool flag = true;  // ? Start assuming number is valid

        while (num > 0) {
            int digit = num % 10;
            if (digit != 1 && digit != 4 && digit != 9) {
                flag = false;
                break;
            }
            num = num / 10; 
        }

        if (flag) {
            count++;  // ? Count only if all digits are 1, 4, or 9
        }
    }

    cout << "Total numbers with only digits 1, 4, 9: " << count << endl;
    return count;
}

int main()
{
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    CountSpecificNumbers(m, n);

    return 0;
}

