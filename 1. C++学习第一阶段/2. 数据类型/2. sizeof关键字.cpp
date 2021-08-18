#include <iostream>
using namespace std;

int main()
{
    short num1 = 10;
    cout << "short占用内存空间为： " << sizeof(short)<<endl;
    cout << "short占用内存空间为： " << sizeof(num1) << endl;
    cout << "long占用内存空间为： " << sizeof(long) << endl;
    system("pause");
    return 0;
}