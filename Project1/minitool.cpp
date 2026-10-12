#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printTable() {
    int t = 9;
    for (int i = 1;i <= t; i++) {
        for (int j = 1;j <= i; j++) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
}

void guessNumber() {
    srand((unsigned)time(0));
    int answer = rand() % 100 + 1;
    int guess;
    int count = 0;
    while (true) {
        cout << "请输入数字: " << endl;
        cin >> guess;
        count++;
        if (guess > answer) {
            cout << "猜大了" << endl;
        }
        else if (guess < answer) {
            cout << "猜小了" << endl;
        }
        else {
            cout << "猜对了" << endl; 
            cout << "你一共用了" << count << "次" << endl;
            break; }
    }


}

void calculator() {
    double a, b;
    char op;

    cout << "输入格式：数字 运算符 数字（如 3 + 4）" << endl;
    cin >> a >> op >> b;

    switch (op) {                       
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        if (b == 0) {                    
            cout << "除数不能为 0" << endl;
        }
        else {
            cout << a / b << endl;
        }
        break;
    default:
        cout << "无效运算符" << endl;
        break;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n1.乘法表 2.猜数字 3.计算器 0.退出" << endl;
        cout << "请选择：";
        cin >> choice;
        if (choice == 0) break;

        switch (choice) {
        case 1: printTable(); break;
        case 2: guessNumber(); break;
		case 3: calculator(); break;
        default: cout << "无效" << endl; break;
        }
    }
    return 0;
}