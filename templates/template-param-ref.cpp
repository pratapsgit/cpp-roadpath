#include <iostream>

template <typename T> const T& getTheMaximumValue(const T& a, const T& b) {
    std::cout<<"("<<__FUNCTION__<<" address of a "<<&a<<" address of b "<<&b<<")"<<std::endl;
    return ((a>b)?a : b);
}

// template <typename T> T getTheMaximumValue(T a, T b){
//     std::cout<<"("<<__FUNCTION__<<" address of a "<<&a<<" address of b "<<&b<<")"<<std::endl;
//     return ((a>b)?a : b);
// }

int main(){

    int a=20;
    int b=30;

    std::cout<<"("<<__FUNCTION__<<" address of a "<<&a<<" address of b "<<&b<<")"<<std::endl;
    std::cout<<"Maximum of "<<a<< " and "<<b<<" is "<<getTheMaximumValue(a, b)<<std::endl;

    double da=34.67;
    double db=84.97;

    std::cout<<"("<<__FUNCTION__<<" address of da "<<&da<<" address of db "<<&db<<")"<<std::endl;
    std::cout<<"Maximum of "<<da<< " and "<<db<<" is "<<getTheMaximumValue(da, db)<<std::endl;
    return 0;
}