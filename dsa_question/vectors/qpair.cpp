#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int Sum)
{
    unordered_set<int> s;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int x = Sum - arr[i];
        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
    }
    return {};
}

int main()
{
    cout << "===Program Started===" << endl;
    vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
    int S = 4;
    auto p = pairSum(arr, S);
    
    //printing p
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<endl;
    }

    if (p.size() == 0)
    {
        cout << "No such Pair" << endl;
    }
    else
    {
        cout << p[0] << "," << p[1] << endl;
    }

    // brute force
    /*
    int result = 0;
    for(int i=0;i<7;i++){
        for(int j =1 ; j<7;j++){
            if(arr[i]==arr[j]) continue;
            result = arr[i] + arr[j];
            if(result == 4){
                res.push_back(arr[i]);
                res.push_back(arr[j]);

            }
        }
    }

    for(int x:res){
        cout<<x<<",";
    }
    */

    return 0;
}
