/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is 
at least as large as the previous element.
On each move, you may increase the value of any
element by one.
What is the minimum number of moves required?
inputs:
    first line n of array
    second line n integers
output:
    minimum number of moves required
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int temp;
    int a[n];
    long moves = 0;
    int delta = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (i > 0){
            delta = a[i-1] - temp;
            if (delta > 0) {
                moves += delta;
                temp += delta;
                }
            }
        a[i] = temp;
    } 
    cout << moves << endl; 
    return 0;
}



