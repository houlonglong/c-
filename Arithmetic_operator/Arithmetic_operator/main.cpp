//
//  main.cpp
//  Arithmetic_operator
//
//  Created by boole on 2018/5/26.
//  Copyright © 2018年 boole. All rights reserved.
// 算术运算符

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
//    int num1;
//    cout << "请输入一个正整数" << endl;
//    cin >> num1;
//    cout << "正整数为:"<<+num1 << "\n";
//    cout << "负数形式整数为:"<<-num1 << "\n";
//
//    cout << "输入第二个整数:" << "\n";
//    int num2;
//    cin >> num2;
//    cout << "第二个数:"<<+num2 << "\n";
//
//    //+
//    int addResult = num1 + num2;
//    cout << addResult << endl;
//
//    //-
//    int subResult = num1 - num2;
//    cout << subResult << endl;
//
//    //*
//    int mulResult = num1 * num2;
//    cout << mulResult << endl;
//
//    // /
//    int divResult = num1 / num2;
//    cout << divResult << endl;
//    return 0;
//
//    //%
//    int modResult = num1 % num2;
//    cout << modResult << endl;
//    return 0;
    
      int a,b,c;
//    a=b=c=5;
//    cout << a << b << c;
    
//    a=5+(c=6);
//    cout << a << endl << c <<endl;

//    a=(b=4)+(c=6);
//    cout << a << endl << c <<endl;
    
    (a=3*5)=4*3;
    cout << a << endl << c <<endl;
   
    a=12;
    a+=a-=a*a; // a=a-144=-132 a+=-132 a= -132+-132 
    cout << a;
    return 0;
    
}
