#include <iostream>
using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int num1 = 0;
        int num2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % m != 0)
            {
                num1 = num1 + i;
            }

            if (i % m == 0)
            {
                num2 = num2 + i;
            }
        }
        return num1 - num2;
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    Solution sol;
    cout << sol.differenceOfSums(n, m) << endl;
    return 0;
}
