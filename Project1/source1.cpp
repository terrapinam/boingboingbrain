#include <iostream>

int main() {
    int h, m;
    std::cin >> h >> m ;
    m += 15;
    if (m >= 60)
        m -= 60;
    else
        h -= 1;
    if (h >= 24)
        h -= 24;
    if (h < 0)
        h += 24;
    std::cout << h << " " << m;
    return 0;
}