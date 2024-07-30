#include <iostream>
#include<vector>
using namespace std;
void printF(int ind, vector<int> &ds, int arr[], int n)
{
    if(ind==n){
        for(int it : ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);

    ds.pop_back();
    printF(ind+1, ds, arr, n);
}

int main()
{
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printF(0, ds, arr, n);
}


