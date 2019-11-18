//#include<iostream>
//using namespace std;
//class Book
//{
//public:
//
//	int num;			//编号
//	string name;		//名字
//
//	Book(int n) {			//构造函数
//		num = n;
//		cout << "构造函数" << endl;
//	}
//	Book(int n, string na) {			//构造函数
//		num = n;
//		name = na;
//		cout << "构造函数emm" << endl;
//	}
//
//	~Book() {			//析构函数
//		cout << "这是析构函数";
//	}
//
//};
//
//int main() {
//	Book B(20);
//	Book C(28, "em");
//	cout << B.num << endl;
//	return 0;
//}

//
//#include <iostream>
//
//using namespace std;
//
//// 基类(父类）
//class Shape
//{
//public:
//	void setWidth(int w)
//	{
//		width = w;
//	}
//	void setHeight(int h)
//	{
//		height = h;
//	}
//protected:
//	int width;
//	int height;
//};
//
//// 派生类
//class Rectangle : public Shape
//{
//public:
//	int getArea()		//自定义方法
//	{
//		return (width * height);
//	}
//};
//
//int main(void)
//{
//	Rectangle Rect;
//
//	Rect.setWidth(5);
//	Rect.setHeight(7);
//
//	// 输出对象的面积
//	cout << "Total area: " << Rect.getArea() << endl;
//
//	return 0;
//}