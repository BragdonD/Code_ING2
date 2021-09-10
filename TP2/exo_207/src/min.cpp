#include <iostream>
#include "min.h"

int findMin(int a, int b, int c){
    return (a>b ? b>c ? c : b : a>c ? c:a);
}

float findMin(float a, float b, float c){
    return (a>b ? b>c ? c : b : a>c ? c:a);
}