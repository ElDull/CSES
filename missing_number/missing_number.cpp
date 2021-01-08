// given all nums between 1..n
// find the missing number
// input: first line - n 
// second line - n-1 nums

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    set<int> a;
    for (int i = 1; i < n; i++){
        cin >> temp;
        a.insert(temp);
    }
    int i;
    for (i = 1; i < n; i++){
        if (a.find(i) == a.end()){
            break;
        }
    }
    cout << i << endl;
}