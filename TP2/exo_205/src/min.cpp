#include <iostream>

int findMin(int a, int b, int c = 0){
    return (a>b ? b>c ? c : b : a>c ? c:a);
}

float findMin(float a, float b, float c = 0){
    return (a>b ? b>c ? c : b : a>c ? c:a);
}