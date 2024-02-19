#include <iostream> 
#include <string> 
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(0, "");
    const int rows = 3;
    const int cols = 5;
    double arr[rows][cols];
    double sum;

    for (int i = 0; i < rows; i++) {
        std::cout << "Введите 5 элементов " << i + 1 << " строки через пробел: ";
        for (int j = 0; j < cols; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        std::cout << "Среднее арифметическое " << i + 1 << " строки: " << sum / cols << std::endl;
    }

    return 0;
}