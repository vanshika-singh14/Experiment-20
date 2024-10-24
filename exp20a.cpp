//Vanshika Singh
//23070123148

#include <iostream>
using namespace std;

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}


void display(int ar[], int len) 
{
  for (int i = 0; i < len; i++) 
  {
    cout << ar[i] << " ";
  }
  cout << endl;
}

void selectsort(int ar[], int len) 
{
  for (int j = 0; j < len - 1; j++) 
  {
    int mi = j;
    for (int i = j + 1; i < len; i++) 
    {
      if (ar[i] < ar[mi])
        mi = i;
    }

    swap(&ar[mi], &ar[j]);
  }
}

int main() 
{
  int data[] = {50, 25, 10, 15, 30};
  int len = sizeof(data) / sizeof(data[0]);
  cout << "Original Array:";
  display(data, len);
  selectsort(data, len);
  cout << "Selection sorted array:";
  display(data, len);
}
