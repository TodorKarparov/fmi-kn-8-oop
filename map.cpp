#include <iostream>
/*
Да се дефнира фунция map(int array[], int array_length, ?? (какъв тип?) ?? func),
където се връща нов масив на които са приложени фунциитя func. Например може да в вдигане на квадрат,
вдигане на 3та степен.

Може ли да се направи да работи за произволен тип int, double, bool? Да - (use templates!)
*/
int square(int x){
  return x*x;
}
template <typename T>
T* map(T array[], size_t array_length, T (*func)(T)){

  T *result = new T [array_length];
  for(int i = 0; i < array_length; i++){
    result[i] = func(array[i]);
  }

  return result;
}

template <typename T>
void printArray(T arr[], size_t length){
  for(int i = 0; i < length; i++){
    std::cout << arr[i] << " ";
  }
}

int main(){

  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int *new_arr = map(arr, 12, square);
  printArray(new_arr, 12);

  return 0;
}
