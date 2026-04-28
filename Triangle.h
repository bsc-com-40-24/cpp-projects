#ifndef TRIANGLE_H
#define TRIANGLE_H
namespace shapes{
  class Triangle{
    private:
    double base;
    double height;
    public:
    Triangle();
    Triangle(double b, double h);
    ~Triangle();
    void setBase(double b);
        double getBase() const;
        void setHeight(double h);
        double getHeight() const;
  };
}
#endif