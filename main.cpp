/*
    功能:继承
    作者:向如千
*/
#include <iostream>

using namespace std;

class Person
{
protected:
    char *name;
    char *sex;
private:

public:
    Person(char *n,char *s):name(n),sex(s)
    {
        cout<<"人的对象被创建！"<<endl;
    }
    virtual void Print()
    {
        cout<<"姓名："<<name<<"\t"<<"性别："<<sex<<endl;
    }
    ~Person()//析构函数
    {
        cout<<"人类对象被销毁！"<<endl;
    }
};

class Student:public Person
{
private:
    char *no;
public:
    Student(char *n1,char *n,char *s):no(n1),Person(n,s)
    {
        cout<<"学生的对象被创建！"<<endl;
    }
    virtual void Print()
    {
        cout<<"学号："<<no<<"姓名："<<name<<"\t"<<"性别："<<sex<<"\t"<<endl;
    }
    ~Student()//析构函数
    {
        cout<<"学生对象被销毁！"<<endl;
    }
};
int main()
{
    Person p("aaa","m");
    cout<<endl;
    Student s("11121","bbb","f");
    cout<<endl;
    p.Print();
    cout<<endl;
    s.Print();
    return 0;
}

