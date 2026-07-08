#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;

    cout << max(A1, A2) + max(B1, B2) + max(C1, C2);

    return 0;
}
