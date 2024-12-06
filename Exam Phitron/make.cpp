#include <iostream>
using namespace std;
const int N=1e5+5;
int dp[N];
bool make(int current,int target)
 {
    if (current == target)
        return true;
    if (current > target)
     return false;
     if(dp[current]!=-1)
        return dp[current];
    return dp[current]= make(current +3 , target) || make(current * 2, target);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        {
            int n;
        cin >> n;
         for(int i=0;i<=N;i++)
         {
             dp[i]=-1;
         }
        if (make(1, n))
         {
            cout << "YES" ;
        }
    else
        {
            cout << "NO" ;
        }
    if(T>0)
        cout<<endl;
    }
    return 0;
}

