#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main(){
  //Rectangle rect;
  //Triangle trgl;
  //Polygon poly;
  Polygon* pPoly1=new Rectangle(4,5);
  Polygon* pPoly2=new Triangle(4,5);
 // Polygon* pPoly3=&poly;
  
  /*pPoly1->SetValues(4,5);
  pPoly2->SetValues(4,5);*/

  pPoly1->PrintArea();
   pPoly2->PrintArea();
 // pPoly3->SetValues(4,5);
  //cout<<pPoly1->Area()<<'\n';
  //cout<<pPoly2->Area()<<'\n';
   //cout<<pPoly3->Area()<<'\n';
   //cout<<rect.Area()<<'\n';
   //cout<<trgl.Area()<<'\n';
   delete pPoly1;
   delete pPoly2;
  return 0;
}