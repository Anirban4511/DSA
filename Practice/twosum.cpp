#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,6,9,8,11};
    vector<vector<int>>v;
    int target=17;
    int i,j,sum;
    int n=sizeof(arr)/sizeof(arr[0]);
    i=0;
    j=n-1;
    while(n--)
    {
        if(i==j)break;
        sum=0;
        sum=arr[i]+arr[j];
        if(sum==target)
        {
            v.push_back({i,j});
        }
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++)
    {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}