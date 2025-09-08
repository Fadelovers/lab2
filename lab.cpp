#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); 

    const char* filenames[] = {"file1.txt", "file2.txt", "file3.txt"};
    const int count = 3; 
    const int numbersCount = 10;

    for (int i = 0; i < count; ++i) {
        std::ofstream file(filenames[i]);
        if (!file.is_open()) return 1; 

        for (int j = 0; j < numbersCount; ++j) {
            int number = std::rand() % 10 + 1; 
            file << number;
            if (j < numbersCount - 1) file << " "; /
        }
    }
    return 0;
}