#include<bits/stdc++.h>
using namespace std;

struct ss{
    int start, end;
}arr[100000];

bool compare(ss a, ss b){
    if(a.end < b.end)
        return true;
    if(a.end== b.end)
        return (a.start < b.start);
    return false;
}

int main(){
    int t, n, cnt, m;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i].start>>arr[i].end;
        sort(arr, arr + n, compare);
        cnt = 1;
        m = arr[0].end;
        for(int i=1;i<n;i++){
            if(m <= arr[
			+i].start){
                cnt++;
                m= arr[i].end;
            }
    }
            cout<<cnt<<"\n";

}
return 0;
}

