#include <iostream>
#include "Object.h"
#include <string>

class Persona: public Object{
  string nombreEmpleado;
  int edadEmpleado;
}

public:
  Persona(string,int);
  virtual string toString()const;
  virtual bool equals(Object*)const;
};

Persona::Persona(string nombreEmpleado, int edadEmpleado): nombreEmpleado(nombreEmpleado),edadEmpleado(edadEmpleado){

}

string Persona::toString()const{
  stringstream ss;
  ss << "Nombre del Empleado: " << nombreEmpleado << "Edada del Empleado: " << edadEmpleado;
  return ss.str();
}

bool Persona::equals(Object* other){
  if(!dynamic.cast<Persona*>(other))
    return false;

    Persona* persona = dunamic.cast<Persona*>(other);
    return persona->nombreEmpleado == nombreEmpleado;
}
