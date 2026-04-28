#ifndef SQUARE_H
#define SQUARE_H
namespace shapes{
  class Square{
    private:
    double sideLength;
    public:
    Square(); //default constructor 
    Square(double side); //overload constructor
    ~Square(); //destructor
    void setSideLength(double side);
    double getSideLength() const;

  };
}
#endif