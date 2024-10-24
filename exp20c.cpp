//Vanshika Singh
//23070123148

#include <iostream>
using namespace std;

void bubbleSort(int ar[], int len) 
{

  for (int j = 0; j < len -1; ++j) 
  {
      
    for (int i = 0; i < len - j - 1; ++i) 
    {

      if (ar[i] > ar[i + 1]) 
      {
        int temp = ar[i];
        ar[i] = ar[i + 1];
        ar[i + 1] = temp;
      }
    }
  }
}

void display(int ar[], int len) 
{
  for (int i = 0; i < len; ++i) 
  {
    cout << "  " << ar[i];
  }
  cout << "\n";
}

int main() 
{
  int data[] = {-11, 3, 0, 11, -1};
  int len = sizeof(data) / sizeof(data[0]);
  cout << "Original array: ";
  display(data, len);
  bubbleSort(data, len);
  cout << "Bubble Sorted array: ";  
  display(data, len);
}
