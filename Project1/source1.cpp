#include <iostream>
#include <cmath>

int main() {
    int A, B;
    using std::cin;
    using std::cout;
    using std::endl;

    cin >> A >> B;
    int result[3];
    //result[0] = A*(B%10);
    //result[1] = A*((B/10)%10);
    //result[2] = A*((B/100)%10);
    //int sum = result[0]+result[1]*10+result[2]*100;
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        result[i] = A * ((B / (int)std::pow(10, i)) % 10);
        sum += result[i] * (int)std::pow(10, i);
    }
    cout << result[0] << endl << result[1] << endl << result[2] << endl << sum << endl;
    return 0;
}