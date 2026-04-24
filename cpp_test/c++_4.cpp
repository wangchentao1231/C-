# include <iostream>
using namespace std;
//# define 宏常量
// const 修饰的变量
#define Day 7
int main(){

    //Day = 14 //错误 Day为常量，不可修改
    cout << "一周总共有: " << Day << "天" << endl;

    //const
    const int month = 12;
    //month = 24 const 修饰的变量就变成了常量，不可更改
    cout << "一年总共有：" << month << "个月份" << endl;

    system("pause");

    return 0;
}