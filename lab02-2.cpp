#include <iostream>
#include <string>

int main()
{
    double a = 0;
    double b = 0;
    std::cout<<"Input a: ";
    std::cin>>a;
    std::cout<<"Input b: ";
    std::cin>>b;
    double x = -(b/a);
    if(a == 0 && b!=0){
        std::cout<<"No solution"<<std::endl;
    }else if(a == 0 && b == 0){
        std::cout<<"Solution is any real number"<<std::endl;
    }else{
        std::cout<<"The solution is: "<<x<<std::endl;
    }
    return 0;
    // the best type for this type of task is long or double since they allow for the use of fractions while not taking too much space
}