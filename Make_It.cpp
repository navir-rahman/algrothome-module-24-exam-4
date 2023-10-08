#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;

        bool dp[s + 1];
        for (int i = 0; i <=s; i++)
        {
            dp[i]=false;
        }
        dp[1]=1;
        
        for (int i = 1; i <= s; i++){
          if(dp[i]){
             if(i+3<=s) dp[i+3]=true;
            if(i*2<=s) dp[i*2]=true;
          }
        }


        if (dp[s])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}