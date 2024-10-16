#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

const int SIZE = 20;
const int MIN_VALUE = -20;
const int MAX_VALUE = 50;

void generateArray(int arr[], int size) {
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    for (int i = 0; i < size; ++i) {
        arr[i] = distribution(generator);
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}


int processArray(int arr[], int size, int& count, int& sum) {
    count = sum = 0;
    for (int i = 0; i < size; i++) {

        if (arr[i] > 0 && i % 5 != 0) {
            ++count;
            sum += arr[i];
        }
    }
    return sum;
}


void replaceElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {

        if (arr[i] > 0 && i % 5 != 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int a[SIZE], count, sum;

    generateArray(a, SIZE);
    printArray(a, SIZE);
    processArray(a, SIZE, count, sum);
    replaceElements(a, SIZE);
    cout << "Count of element = " << count << endl;
    cout << "S= " << sum << endl;
    printArray(a, SIZE);
    return 0;
}