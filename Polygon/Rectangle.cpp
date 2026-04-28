#include "Rectangle.h"
 Rectangle :: Rectangle(int w,int h){
   mWidth =w;
   mHeight=h;
}
int Rectangle::Area(){
  return mWidth * mHeight;
}