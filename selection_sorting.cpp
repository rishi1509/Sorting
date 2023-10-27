

/*Exp_22
Sorting Algorithm 
Selection Sort*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    selectionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*Output
Original array: 64 25 12 22 11 
Sorted array: 11 12 22 25 64
*/

/* 
 22070123095
Exp_22
Sorting Algorithm
i) Selection Sort  ii) Insertion Sort   iii) Bubble Sort
Take input from user
*/
#include <iostream>
using namespace std;

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    cout << "Choose a sorting algorithm:" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Insertion Sort" << endl;
    cout << "3. Bubble Sort" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            selectionSort(arr, n);
            break;
        case 2:
            insertionSort(arr, n);
            break;
        case 3:
            bubbleSort(arr, n);
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*Output
Enter the number of elements in the array: 5
Enter 5 elements of the array: 32 12 45 3 9
Choose a sorting algorithm:
1. Selection Sort
2. Insertion Sort
3. Bubble Sort
Enter your choice: 1
Sorted array: 3 9 12 32 45

Enter the number of elements in the array: 5
Enter 5 elements of the array: 32 12 45 3 9
Choose a sorting algorithm:
1. Selection Sort
2. Insertion Sort
3. Bubble Sort
Enter your choice: 2
Sorted array: 3 9 12 32 45

Enter the number of elements in the array: 5
Enter 5 elements of the array: 3 9 12 32 45
Choose a sorting algorithm:
1. Selection Sort
2. Insertion Sort
3. Bubble Sort
Enter your choice: 3       
Sorted array: 3 9 12 32 45
*/
