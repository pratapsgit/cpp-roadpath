#include <iostream>
#include <cstring>

template<typename T>
T maxOf(T a, T b){
    return (a>b)? a : b;
}

template<>
const char * maxOf<const char *>(const char * a, const char * b){
    return ((std::strcmp(a, b)>0) ? a: b);
}

int main(){
    int ia{20}, ib{30};
    double da{50.34}, db{23.89};
    std::string sa{"Hello"}, sb{"Yellow"};

    auto result_i = maxOf(ia, ib);
    std::cout<<"result "<<result_i<<std::endl;
    auto result_d = maxOf(da, db);
    std::cout<<"result "<<result_d<<std::endl;
    std::string result_s = maxOf(sa, sb);
    std::cout<<"result "<<result_s<<std::endl;

    const char* pa{"Wild"};
    const char* pb{"Animal"};
    const char* result_p = maxOf(pa, pb);
    std::cout<<"result "<<result_p<<std::endl;

    return 0;
}

