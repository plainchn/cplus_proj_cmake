#ifndef __EXAMPLE_HPP__
#define __EXAMPLE_HPP__
/*        一般情况下，静态成员函数主要是用来访问全局变量或者同一个类中的静态数据成员    
*1. 静态成员函数是类的一部分，而不是对象的一部分
*2. 静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。
*3. 静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
*4. 静态成员函数有一个类范围，他们不能访问类的 this 指针。使用静态成员函数来判断类的某些对象是否已被创建。
*5. 静态成员函数可以在建立任何对象之前处理静态数据成员，这是普通成员函数不能实现的。
*/

class Num
{
   //不能使用初始化列表初始化静态成员变量Num(): m(1),静态变量必须类外初始化
public:
   Num()
   {
      //可以在构造函数中重新赋值静态变量
   }
   void setNum(int value)
   {
      m = value;
   }
   int getNum()
   {
      return m;
   }

private:
   static int m;
};
int Num::m = 0;


#endif