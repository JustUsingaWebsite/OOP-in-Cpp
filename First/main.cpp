#include <iostream>
using namespace std;

enum roles{
    _admin = 1,
    _clerk = 2,
    _customer = 3
};

enum description {
    _virtual = 1,
    _physical = 2
};

int main(){
    cout << roles::_customer << endl;

    return 0;
}