#include <iostream>

class Circle
{
   private:
      double radius_;

   public:
      Circle(double r) : radius_(r) {}

      double get_radius_1() { return radius_; }

      double & get_radius_2() { return radius_; }
};


int main(void)
{
    {
        Circle c(1.0);
        double r = c.get_radius_1();
        r = 4.0;
        std::cout << "r = " << r << "  radius_ = " << c.get_radius_1() << std::endl;
    }

    {
        Circle c(1.0);
        double r = c.get_radius_2();
        r = 4.0;
        std::cout << "r = " << r << "  radius_ = " << c.get_radius_1() << std::endl;
    }

    {
        /* does not compile
        Circle c(1.0);
        c.get_radius_1() = 2.0;
        std::cout << "radius_ = " << c.get_radius_1() << std::endl;
        */
    }

    {
        Circle c(1.0);
        c.get_radius_2() = 2.0;
        std::cout << "radius_ = " << c.get_radius_1() << std::endl;
    }

    {
        /* does not compile
        Circle c(1.0);
        double & r = c.get_radius_1();
        r = 4.0;
        std::cout << "r = " << r << "  radius_ = " << c.get_radius_1() << std::endl;
        */
    }

    {
        Circle c(1.0);
        double & r = c.get_radius_2();
        r = 4.0;
        std::cout << "r = " << r << "  radius_ = " << c.get_radius_1() << std::endl;
    }


    return 0;
}
