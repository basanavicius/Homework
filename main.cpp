#include <iostream>
using namespace std;

int main()
{
    cout << "-------------------------" << endl;
    cout << "Code 1 - 'For' Loop" << endl;
    cout << "-------------------------" << endl;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "I have " << i << endl;
        sum += i;
    }
    cout << "Total sum: " << sum << endl;
    
    cout << "  " << endl;
    cout << "-------------------------" << endl;
    cout << "Code 2 - Comparing Sums" << endl;
    cout << "-------------------------" << endl;
    int i;
    int sum1 = 0;
    int sum2 = 0;
    for (i = 20; i<= 30; i++)
    {
        sum1 = sum1 + i;
    }
    for (i = 35; i<= 42; i++)
    {
        sum2 = sum2 + i;
    }
    if (sum1 > sum2) cout << "sum 20-30 is greater by " << sum1 - sum2 << endl;
    else if (sum2 > sum1) cout << "sum 35-42 is greater by " << sum2 - sum1 << endl;
    else cout << "sums are equal" << endl;
    cout << "  " << endl;
    cout << "-------------------------" << endl;
    cout << "Code 3 - Sorting Numbers" << endl;
    cout << "-------------------------" << endl;
    sum1 = 0;
    for (i = 1; i<=50; i++)
    {
        if (i % 3 == 0)
        {
            if (i % 5 == 0)
            {
                cout << i << "  ";
                sum1 = sum1 + i;
            }
        }
    }
    cout << " Total sum: " << sum1 << endl;


}