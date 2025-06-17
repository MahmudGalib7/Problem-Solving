#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;
    double division = static_cast<double>(a) / b;
    int floor_result = static_cast<int>(std::floor(division));
    int ceil_result = static_cast<int>(std::ceil(division));
    int round_result = static_cast<int>(std::round(division));
    std::cout << "floor " << a << " / " << b << " = " << floor_result << std::endl;
    std::cout << "ceil " << a << " / " << b << " = " << ceil_result << std::endl;
    std::cout << "round " << a << " / " << b << " = " << round_result << std::endl;
    return 0;
}
