#include <iostream>
using namespace std;



int main(){
    int n;
    cin >> n;

    if (n==1) {
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
    } 

    // 2 4 1 3
    // 4 2 5 3 1
    // repeat this pattern
    // since we don't HAVE to print out all permutations for n
    // if n is odd
    // we just print all even numbers in descending order and all odd numbers in ascending order
    // and the reverse for the even case
    if (n%2==0){
        for (int i=2; i<=n; i+=2)
            cout << i << " ";
        for (int i=1; i<=n; i+=2)
            cout << i << " ";
    }
    else {
        for (int i=n-1; i>0; i-=2)
            cout << i << " ";
        for (int i=n; i>0; i-=2)
            cout << i << " ";
    }
}