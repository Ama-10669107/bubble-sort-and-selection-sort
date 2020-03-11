void swap(int *a, int *b)
{
  int temp = a;
  a = b;
  b = temp;
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;
}
void selectnSort(int array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min = step;
    for (int i = step + 1; i < size; i++)
    {
      if (array[i] < array[min])
        min = i;
    }
    swap(&array[min], &array[step]);
  }
}
int main()
{
  int data[] = {44, 66, 8, 5, 52};
  int size = sizeof(data) / sizeof(data[0]);
  selectnSort(data, size);
  cout << "Array sorted in Acsending Order:\n";
  printArray(data, size);
}