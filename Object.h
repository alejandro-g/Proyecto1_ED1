#include <string>
#include <iostream>


class Object{
  public:
    Object();
    virtual ~Object();
    virtual string toString()const;
    virtual bool equals(Object*)const;
};

Object::Object(){

}

Object::~Object(){

}

string Object::toString()const{
  stringstream ss;
  ss << "Object@" << this;
  return ss.str();
}

bool Object::equals(Object* other) const{
  return other == this;
}
