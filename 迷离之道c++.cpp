//#include<iostream>
//using namespace std;
//class Book
//{
//public:
//
//	int num;			//���
//	string name;		//����
//
//	Book(int n) {			//���캯��
//		num = n;
//		cout << "���캯��" << endl;
//	}
//	Book(int n, string na) {			//���캯��
//		num = n;
//		name = na;
//		cout << "���캯��emm" << endl;
//	}
//
//	~Book() {			//��������
//		cout << "������������";
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
//// ����(���ࣩ
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
//// ������
//class Rectangle : public Shape
//{
//public:
//	int getArea()		//�Զ��巽��
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
//	// �����������
//	cout << "Total area: " << Rect.getArea() << endl;
//
//	return 0;
//}