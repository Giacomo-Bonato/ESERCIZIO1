#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector <int> v = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};
    auto negativo = std::find_if(v.begin(), v.end(), [](int i) {
        if (i < 0)
           return true;
            return false;

    });
    std::cout << *negativo << std::endl;

    std::remove_if(v.begin(), v.end(), [](int i) {
        if (i < 0)
            return true;
            return false;

    });


    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    return 0;
}
