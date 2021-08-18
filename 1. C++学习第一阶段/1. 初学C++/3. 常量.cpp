#include <iostream>
using namespace std;
//宏常量
#define week 7

int main()
{
    //const修饰变量
    const int month = 12;

    cout << "一周共有:" << week << "天" << endl;
    cout << "一年共有:" << month << "月" << endl;

    system("pause");
    return 0;
}
