//
// Created by chenchao on 2018/10/24.
//

#ifndef MYSORT_STUDENT_H
#define MYSORT_STUDENT_H

#include <iostream>
#include <string>

using namespace std;


struct Student{

    string name;
    int score;

    // 重载小于运算法,定义Student之间的比较方式
    // 如果分数相等，则按照名字的字母序排序
    // 如果分数不等，则分数高的靠前
    bool operator<(const Student& otherStudent){
        return score != otherStudent.score ?
               score > otherStudent.score : name < otherStudent.name;
    }

    // 重载<<符号, 定义Student实例的打印输出方式
    // * 很多同学看到这里的C++语法, 头就大了, 甚至还有同学表示要重新学习C++语言
    // * 对于这个课程, 大可不必。C++语言并不是这个课程的重点,
    // * 大家也完全可以使用自己的方式书写代码, 最终只要能够打印出结果就好了, 比如设置一个成员函数, 叫做show()...
    friend ostream& operator<<(ostream &os, const Student &student){

        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};

#endif //MYSORT_STUDENT_H
