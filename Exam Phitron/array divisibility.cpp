#include <iostream>
#include <vector>
using namespace std;
vector<int> generatearray(int n)
{
    vector<int> Array(n);
    for (int i = 0; i < n; ++i)
    {
       Array[i] = (i + 1) * (i + 1);
    }
    return Array;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> result = generatearray(n);
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        if(t>0)
            cout<<endl;
    }
    return 0;
}
