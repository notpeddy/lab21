#include <iostream>
#include <vector>
#include <cstdlib>  // For atof
#include <iomanip>  // For setprecision

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average.\n";
        return 1;
    }

    vector<int> numbers;
    for (int i = 1; i < argc; ++i) {
        numbers.push_back(atof(argv[i]));
    }

    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    int average = sum / numbers.size();

    cout << "---------------------------------\n";
    cout << "Average of " << numbers.size() << " numbers = " 
         << fixed << setprecision(3) << average << "\n";
    cout << "---------------------------------\n";

    return 0;
}

