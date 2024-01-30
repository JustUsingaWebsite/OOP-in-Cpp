#include <iostream>
using namespace std;

enum roles{
    admin = 1,
    clerk = 2,
    customer = 3
};

int main(){
    cout << roles::customer << endl;
    
    return 0;
}