#include <iostream>
using namespace std;

class Solution
{
public:
    int theMaximumAchievableX(int num, int t)
    {
        return num + 2 * t;
    }
};

int main(int argc, char const *argv[])
{
    int num, t;
    cin >> num >> t;
    Solution sol;
    cout << sol.theMaximumAchievableX(num, t) << endl;
    return 0;
}
