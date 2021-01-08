/*
Given a DNA string which consists of the characters
A, C, G, T.
find longest repeating character
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int count= 1;
    int max = 0;
    string dna;
    cin >> dna;
    char prev = dna[0];

    for (int i = 1; i <= dna.size(); i++){

       if (dna[i] == prev){
           count++;
       }

       else {
           if (count > max) {
               max = count;
           }
           count = 1;
       }
       prev = dna[i];
    }
    cout << max << endl;
    return 0;
}

