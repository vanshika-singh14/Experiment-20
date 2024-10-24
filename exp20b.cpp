//Vanshika Singh
//23070123148

#include <iostream>
using namespace std;

void insertsort(int ar[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = ar[i];
        int j = i - 1;

        while (j >= 0 && ar[j] > key) 
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
}

void display(int ar[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main() {
    int ar[] = {12, 16, 2, 8, 6};
    int n = sizeof(ar) / sizeof(ar[0]);

    cout << "Original array: ";
    display(ar, n);
    insertsort(ar, n);
    cout << "Insertion Sorted array: ";
    display(ar, n);

    return 0;
}
