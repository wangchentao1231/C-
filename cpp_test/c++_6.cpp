#include <iostream>
using namespace std;
// 标识符命名规则
// 1.不可是关键字
// 2.由字母、数字、下划线构成
// 3.第一个字符只能是字母或下划线
// 4.标识符是区分大小写的
int main(){
    //1.不可以是关键字
    // int int = 10
    //2、 由字母、数字、下划线构成
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;

    //第一个字符只能是字母或下划线
    //int 123abc = 40;

    //4.标识符是区分大小写的
    int aaa = 100;
    cout << "aaa=" << aaa <<endl;
    // cout << "aaa=" << AAA <<endl; aaa 和 AAA 不是同一个名称
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    cout << "num1 + num2=" << sum <<endl;

    system("pause");
    return 0;
}