#include "vector"
#include "iostream"
#include "string"
#include "output_container.h"  // operator<< for containers


using namespace std;

void reverseString(vector<string>& s) {
    for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
        swap(s[i],s[j]);
    }
}

int main(){
    vector<string> a  {"a","b","c"};
    vector<string> b  ; // How to copy a to b
    reverseString(a);
    reverseString(b);
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}