#include "VSArrayList.h"
#include "ADTList.h"
#include <iostream>

bool VSArrayList::insert(Object* element, int posicion){
  if(posicion < 0 || posicion > size){
    return false;
  }
  if(size == current_capacity){
    resize();
  }
  for (int i = size; i > posicion ; i--) {
    array[i] = array[i -1];
  }
  array[posicion] = element;
  size++;
  return true;
}

void VSArrayList::resize(){
  Object** temporal = NULL;
  temporal = new Object*[current_capacity + delta];
  //for para la validacion de memoria
  for (int i = 0; i < current_capacity; i++) {
    temporal[i] = array[i];
  }
  delete[] array;
  array = temporal;
  current_capacity += delta;
}
