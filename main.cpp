#include <iostream>
#include "swap.h"

using namespace std;



int main(int argc, char **argv){
    int v1 = 10;
    int v2 = 20;

    cout << "Before swap, v1 = " << v1 << ", v2 = " << v2 << endl;
    swap(v1, v2);
    cout << "After swap, v1 = " << v1 << ", v2 = " << v2 << endl;

    return 0;
}

