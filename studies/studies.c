int main(void)
{
  // Bubble sort
  // int tab[5] = {1, 9, 2, 3, 4};
  // int size = 5;
  // int m;
  // int n;
  // int temp;

  // m = 0;
  // while (m < size - 1)
  // {
  //   n = 0;
  //   while (n < size - 1)
  //   {
  //     if (tab[n] > tab[n + 1])
  //     {
  //         temp = tab[n];
  //         tab[n] = tab[n + 1];
  //         tab[n + 1] = temp;
  //     }
  //     n++;
  //   }
  //   m++;
  // }
  
  // Selection sort
  // int arr[5] = {1, 9, 2, 3, 4};
  // int size = 5;
  // int i = 0;

  // while (i < size)
  // {
  //   int minIndex = i;
  //   int j = i + 1;
  //   while (j < size)
  //   {
  //     if(arr[j] < arr[minIndex])
  //       minIndex = j;
  //     j++;
  //   }
  //   int temp = arr[i];
  //   arr[i] = arr[minIndex];
  //   arr[minIndex] = temp;
  //   i++;
  // }
  
  // Insertion sort
  int arr[5] = {1, 9, 2, 3, 4};
  int size = 5;
  int i = 1;
  
  while (i < size)
  {
    int j = i;
    while (j > 0 && arr[j] < arr[j-1])
    {
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
    i++;
  }
}