//#include<iostream>
//using namespace std;
//
//int area(int a);                                                              //For Area of Square
//float area(float a, float b);                                                 //For Area of Rectangle
//float area(float a);                                                          //For Area of Circle
//
//int main()
//{
//	int choice;
//	cout << "\n\nPress 1 for area of square.\n\nPress 2 for area of Rectangle.\n\nPress 3 for area of Circle";
//	cout << "\n\nEnter your choice: ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		int length;
//		int areaSquare;
//		cout << "\n\nEnter the Length : ";
//		cin >> length;
//		areaSquare = area(length);
//		cout << "\n\nArea of the square is : " << areaSquare;
//	}
//	else if (choice == 2)
//	{
//		float length, breadth;
//		float areaRectangle;
//		cout << "\n\nEnter the length: ";
//		cin >> length;
//		cout << "\n\nEnter the Breadth: ";
//		cin >> breadth;
//		areaRectangle = area(length, breadth);
//		cout << "\n\nArea of the Rectangle: " << areaRectangle;
//
//	}
//	else if (choice == 3)
//	{
//		float radius;
//		float areaCricle;
//		cout << "\nEnter the Radius: ";
//		cin >> radius;
//		areaCricle = area(radius);
//		cout << "\nArea of the Circle is: " << areaCricle;
//	}
//	else
//	{
//		cout << "\nInvalid Input, please chose from within the menu, Thank you";
//	}
//
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}
//
//int area(int Length)
//{
//	int area = 0;
//	area = Length * Length;
//	return area;
//}
//float area(float Length, float Breadth)
//{
//	return Length * Breadth;
//}
//float area(float Radius)
//{
//	float area;
//	const float pi = 3.148;
//	area = pi * (Radius * Radius);
//	return area;
//}
