#include "Polygon.h"
class Triangle : public Polygon{
  public:
  Triangle(int w, int h){
    mWidth=w;
    mHeight=h;
  } 
    int Area() override{
      return (mWidth * mHeight)/2;
    }

};