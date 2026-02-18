#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 1'000'000; ++i)
        std::cout << i << '\n';

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time: "
              << std::chrono::duration<double>(end - start).count()
              << " sec\n";
}
