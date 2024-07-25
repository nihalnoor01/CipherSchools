#include <iostream>
using namespace std;

// Function to find minimum and maximum values in an array
void minmax(int *a, int *min, int *max, int size) {
    // Initialize min and max with the first element of the array
    *min = a[0];
    *max = a[0];
    
    // Traverse the array to find the actual min and max
    for(int i = 1; i < size; i++) {
        if(a[i] > *max) {
            *max = a[i];
        }
        if(a[i] < *min) {
            *min = a[i];
        }
    }
}

int main() {
    int a[6] = {3, 1, 4, 1, 5, 9};
    int min, max;
    
    // Call the minmax function
    minmax(a, &min, &max, 6);
    
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;
    
    return 0;
}
