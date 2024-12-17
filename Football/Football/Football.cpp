#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int goals = 0;
    cin >> goals;
    int count1 = 0, count2 = 0;
    string team1, team2;
    string temp;
    int f = 0;
    for (size_t i = 1; i <= goals; i++)
    {
        cin >> temp;
        if (f == 0)
        {
            f = 1;
            team1 = temp;
        }
        if (temp == team1)
        {
            count1++;
        }
        else if (temp != team1)
        {
            team2 = temp;
            count2++;
        }
    }
    if (count1 > count2)
        cout << team1;
    else
        cout << team2;
    return 0;
}