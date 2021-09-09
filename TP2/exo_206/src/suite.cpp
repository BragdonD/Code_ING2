#include <iostream>

int sequence(int now, int before, int n){
    if(n==1){}
    else{
        return sequence(now + before,now,n-1);
    }
}