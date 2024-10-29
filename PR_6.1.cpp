#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int SIZE = 25;
const int Low = -20;
const int High = 30;

// функція що генерує масив з випадковими значеннями
void Create(int a[], int size) {
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (Low - High + 1);
    }
}
void output(const int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}
int count(const int a[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int sum(const int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}
void replaceZero(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 && a[i] % 2 == 0) {
            a[i] = 0;
        }
    }
}
int main() {
    int array[SIZE];
    
    Create(array, SIZE);// Generate the array
    
    cout << "Original Array:\n";// Display the original array
    output(array, SIZE);
    
    int COUNT = count(array, SIZE);// Calculate count and sum of positive, even elements
    int SUM = sum(array, SIZE);
    
    cout << "\nCount of positive elements: " << COUNT << endl;//Display count and sum
    cout << "Sum of positive elements: " << SUM << endl;
    
    replaceZero(array, SIZE);// Replace positive, even elements with zero

    cout << "\nModified Array:\n";// Display the modified array
    output(array, SIZE);

    return 0;
}
