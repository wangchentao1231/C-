#include <iostream>
using namespace std;
int main(){

    // 字符型变量创建方式
    char ch = 'A';
    cout << ch << endl;
    // 字符型变量所占内存大小
    cout << "char占用的空间内存" << sizeof(char) << endl;
    // 字符型变量常见错误
    //char ch1 = "b"; //要使用单引号
    //char ch2 = 'abcdef;' // 单引号内只能由1个字符
    // 字符型变量对应的ASCII编码
    // a - 97 
    // A - 65
    cout << (int)ch << endl;


    system("pause");
    return 0;
}