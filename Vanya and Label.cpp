#include <bits/stdc++.h>
#define fast cin.tie(0);cin.sync_with_stdio(0);

#define mod 1000000007
typedef long long ll;

using namespace std;

int noOfOnes(int n)
{
    int cnt = 0;
    while(n){
        n &= n-1;
        cnt++;
    }
    return cnt;
}
int main()
{
    fast;
    string s;
    ll sum = 1;
    short ones = 0,zeros;
    cin>>s;
    for(int i =0;i<s.size();i++){
            zeros = 0;
        if(s[i]>='0'&&s[i]<='9')
        {
            ones = noOfOnes(s[i]-'0');
            zeros= 6-ones;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            ones = noOfOnes((s[i]-'A') + 10);
            zeros= 6-ones;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            ones = noOfOnes((s[i]-'a') + 36);
            zeros=6-ones;
        }
        else if(s[i]== '-')
        {
            zeros = 1;
        }
        sum *= pow(3,zeros);
        sum %= mod;
    }
    cout<<sum;

}