#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool suficient_timp(vector<int> v, long long int time, int t){
    long long int s=0;
    for(int k:v) {
        s += time / k;
        if (s>=t) {
            return true;
        }
        if (s < 0) {
            // overflow
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    int t;
    cin>>n>>t;

    vector<int>v;
    v.reserve(n);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    long long int st=0;
    long long int dr=LONG_MAX;

    // while(st<dr){
    //     int mid=(st+dr)/2;
    //     rasp=mid;
    //     if(suficient_timp(v,mid,t))
    //         dr=mid;
    //     else
    //         st=mid+1;
    // }
    while(true) {
        // punem conditie de == pentru ca mai jos nu facem +2 ci +1
        // deci nu avem cu sa-i facem sa se sara.
        if (st == dr) {
            cout<<st;
            break;
        }

        long long int mid = (st+dr)/2;
        if(suficient_timp(v,mid,t))
            dr=mid;
        else
            st=mid+1;
    }

    return 0;
}