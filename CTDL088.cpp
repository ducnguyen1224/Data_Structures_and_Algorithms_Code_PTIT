#include <iostream>
#include <vector>
#include <algorithm>

int minimumTransformations(std::vector<int>& start, std::vector<int>& target) {
    int transformations = 0;

    for (int i = 0; i < 6; i++) {
        int diff = std::abs(target[i] - start[i]);
        if (diff > 3) {
            diff = 6 - diff;
        }
        transformations += diff;
    }

    return transformations;
}

int main() {
    std::vector<int> start(6);
    std::vector<int> target(6);

    for (int i = 0; i < 6; i++) {
        std::cin >> start[i];
    }

    for (int i = 0; i < 6; i++) {
        std::cin >> target[i];
    }

    int result = minimumTransformations(start, target);
    std::cout << result << std::endl;

    return 0;
}