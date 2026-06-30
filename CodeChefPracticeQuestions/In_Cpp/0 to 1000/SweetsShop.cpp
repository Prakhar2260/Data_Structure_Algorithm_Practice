#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;

    int remaining=X-(10*N);
    int jalebis=remaining/20;

    cout << jalebis << endl;

    return 0;
}
