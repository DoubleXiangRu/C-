/*
    ����:�̳�
    ����:����ǧ
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
        cout<<"�˵Ķ��󱻴�����"<<endl;
    }
    virtual void Print()
    {
        cout<<"������"<<name<<"\t"<<"�Ա�"<<sex<<endl;
    }
    ~Person()//��������
    {
        cout<<"����������٣�"<<endl;
    }
};

class Student:public Person
{
private:
    char *no;
public:
    Student(char *n1,char *n,char *s):no(n1),Person(n,s)
    {
        cout<<"ѧ���Ķ��󱻴�����"<<endl;
    }
    virtual void Print()
    {
        cout<<"ѧ�ţ�"<<no<<"������"<<name<<"\t"<<"�Ա�"<<sex<<"\t"<<endl;
    }
    ~Student()//��������
    {
        cout<<"ѧ���������٣�"<<endl;
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

