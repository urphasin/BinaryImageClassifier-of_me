#include <iostream>
#include <chrono>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    // Start timer
    auto start_time = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 100'000; i++) {
        std::cout << i << "\n";
    }

    // End timer
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate duration in milliseconds
    auto total_time = std::chrono::duration_cast<std::chrono::milliseconds>(
        end_time - start_time
    );

    std::cout << "Execution time: "
              << total_time.count()
              << " ms"
              << std::endl;

    return 0;
}
