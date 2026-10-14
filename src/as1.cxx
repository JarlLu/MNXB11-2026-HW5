#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) {
    int a_temp=*a;
    int b_temp=*b;
    int c_temp=*c;
    *a= b_temp;
    *b= c_temp;
    *c= a_temp;}

}; // namespace homework
