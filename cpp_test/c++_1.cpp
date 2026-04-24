#include <iostream>
#include <vector> // 使用vector需要包含此头文件

int main() {
    // 使用标准命名空间
    using namespace std; 
    // 创建一个字符串向量
    vector<string> msg {"Hello", "C++", "in", "VS Code!"};
    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}