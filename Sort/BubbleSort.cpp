#include <iostream>
#include <vector>
using namespace std;

void swap(int *x, int *y) { int t = *x; *x = *y; *y = t; }

void bubble(vector<int> &v) {
    for(int i = v.size(); i > 0; i--) 
        for (int j = 0; j < i; j++) 
            if (v[j] > v[j+1])
                swap(&v[j], &v[j + 1]);
}

int main() {
    vector<int> v;
    v.emplace_back(58);     v.emplace_back(6);
    v.emplace_back(28);     v.emplace_back(49);
    v.emplace_back(84);     v.emplace_back(70);
    v.emplace_back(38);     v.emplace_back(82);
    v.emplace_back(93);     v.emplace_back(105);
    v.emplace_back(60);     v.emplace_back(1);

    cout << "Before : ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;
    bubble(v);

    cout << "After :  ";
    for(int i : v) {
        cout << i << " ";
    }
}