#include <iostream>

using namespace std;

bool functionAcommplishByLambda(int x)
{
    return  [=]()->bool {
            if(x <= 10)
                return 1;
            else
                return 0;
        }();

}





int main() {

    function<bool(int)> func = functionAcommplishByLambda;

    cout << func(5) << endl;

    return 0;
}