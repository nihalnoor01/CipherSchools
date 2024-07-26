#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 23, 4, 567, 865, 3, 37, 28, 2378, 78};

    for (int i = 0; i < 9; i++) {
        int least_index = i; 
        for (int j = i; j < 10; j++) { 
            if (arr[j] < arr[least_index]) { 
                least_index = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[least_index];
        arr[least_index] = temp;
    }

    
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
