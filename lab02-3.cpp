#include <iostream>
#include <string>
#include <cmath>

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    std::cout<<"Input a: ";
    std::cin>>a;
    std::cout<<"Input b: ";
    std::cin>>b;
    std::cout<<"Input c: ";
    std::cin>>c;
    double d = (b*b) - (4*a*c);
    if(d == 0){
        double x = (-b)/(2*a);
        std::cout<<"The only root is: "<<x<<std::endl;
    }else if(d > 0){
        double x1 = ((-b)-(std::sqrt(d)))/(2*a);
        double x2 = ((-b)+(std::sqrt(d)))/(2*a);
        std::cout<<"The two roots are: "<<x1<<" and "<<x2<<std::endl;
    }else if(d<0){
        double cx11 = (-b)/(2*a);
        double cx12 = std::sqrt(d)/(2*a);
        double cx21 = (-b)/(2*a);
        double cx22 = -(std::sqrt(d))/(2*a);
        std::cout<<"The two complex conjugate roots are: "<<cx11<<" + i*"<<cx12<<" and "<<cx21<<" + i*"<<cx22<<std::endl;
    }
    std::cout<<"delta is "<<d<<std::endl;
    return 0;
}