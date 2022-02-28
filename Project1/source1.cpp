#include <iostream>
//#include <cmath>
//#include <cstring>
//#include <string>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    int A, B;
    scanf_s("%d %d", &A, &B);
    if (A > B) {
        printf(">");
    }
    else if (A < B) {
        printf("<");
    }
    else if (A == B) {
        printf("==");
        }
    return 0;
}