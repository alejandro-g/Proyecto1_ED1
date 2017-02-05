#include "VSArrayList.h"
#include "ADTList.h"
#include <iostream>

//metodo encargado de insertar elementos en la lista
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

//metodo que se encarga de hacer modificaciones al size de la lista en cualquier caso de modificacion
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


VSArrayList::VSArrayList(int current_capacity){
  this-> current_capacity = current_capacity;
  delta = current_capacity;
  array = new Object* [current_capacity];
  if(!array){
    cerr << "NO MEMORY LEFT" << endl;
    exit(1);
  }
}

//destructor virtual de VSArrayList
VSArrayList::~VSArrayList(){
  for (int i = 0; i < size; i++) {
    if(array[i]){
      delete array[i];
    }
  }
  delete[] array;
}

VSArrayList::VSArrayList(int current_capacity, int delta){
  this-> current_capacity = current_capacity;
  this-> delta = delta;
}
