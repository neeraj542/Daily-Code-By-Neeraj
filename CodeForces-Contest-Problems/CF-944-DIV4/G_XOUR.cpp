#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

#define vi vector<int>
#define pb push_back

void solve( int test_cases)
{
    while (test_cases--)
    {
        int length;
        cin >> length;

        vi array(length);
        for (int i = 0; i < length; ++i)
        {
            cin >> array[i];
        }

        vi result(length);
        map<int, vi> indices_map;
        set<int> unique_elements;

        for (int i = 0; i < length; ++i)
        {
            indices_map[array[i]].pb(i);
            unique_elements.insert(array[i]);
        }

        while (!unique_elements.empty())
        {
            set<int> replaced_elements, indices;
            int smallest_element = *unique_elements.begin();

            for (int i = 0; i <= 3; ++i)
            {
                int num = smallest_element ^ i;
                if (unique_elements.find(num) != unique_elements.end())
                {
                    unique_elements.erase(num);
                    for (int i : indices_map[num])
                    {
                        indices.insert(i);
                    }
                    replaced_elements.insert(num);
                }
            }

            for (int replaced_element : replaced_elements)
            {
                int count = indices_map[replaced_element].size();
                while (count--)
                {
                    result[*indices.begin()] = replaced_element;
                    indices.erase(*indices.begin());
                }
            }
        }

        for (int i = 0; i < length; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    solve(t);

    return 0;
}
