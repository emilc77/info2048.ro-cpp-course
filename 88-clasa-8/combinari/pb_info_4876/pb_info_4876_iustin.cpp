#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> lini;

int n;
int k;

void to(vector<int> v) {

    if(v.back()==n && v.front()==1)
        lini.push_back(v);
}

void callOneLevel(vector<int> arr, int n, int k, int lastUsedIndex, int level) {
    for (int i = lastUsedIndex + 1; i < n; i++) {
        arr[level] = i+1;
        if (level+1 >= k) {
            to(arr);
        } else {
            callOneLevel(arr, n, k, i, level + 1);
        }
    }
}

int main() {
    cin>>n;
    cin>>k;
    vector<int> v(k);
    int level = 0;
    int lastUsedIndex = -1;

    callOneLevel(v, n, k, lastUsedIndex, level);
    for(vector<int> x: lini){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

}