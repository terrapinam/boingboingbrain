#include <iostream>
//#include <cmath>
#include <cstring>
#include <string>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    char id[50] = "joonas";
    char A[50];
    cin >> A;
    int num = strlen(A);
    for (int i = 0; i < num; ) {
        if (A[i] != id[i])
            break;
        cout << id[i];
        if (++i == num)
            cout << "\?\?\!";
    }
}