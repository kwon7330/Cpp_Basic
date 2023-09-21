// Cpp_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 입출력 해더파일
#include <iostream> // input/output stream
#include "Cpp_Basic.h"
#include "io.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "ArithMatic.h"
#include "Auto.h"
#include "CH14_VirtualParent.h"
#include "CH14_VirtualChild.h"
#include "Ch15_PureVirtual.h"
#include "Ch15_PureVirtualChild.h"
# define PLUS (2+3)
// std namespace 사용 정의
using namespace std; // std : standard 표준입출력

# include "Ch10_Class.h"
// 주 실행 함수
// 코드 블럭 : {} 영역, 기능단위로 그룹화 시켜준다.

int main()
{
	
	// 정적선언
	Vehicle Ray(2023, 12000000);
	Ray.PrintPrice();
	Ray.SetYear(2021);
	Ray.PrintYear();
	
	cout << Ray.GetYear() << "\n";

	Vehicle Sonata;
	

	// 동적선언
	Animal* Dog = new Animal;
	Dog->PrintFinger();

	delete Dog;

	//자식 클래스 생성
	Atv Moto;
	//상속받은 Bike class의 멤버함수
	Moto.PrintTire();
	cout << Moto.Price << "\n";
	//Atv의 멤버 함수
	Moto.PrintTire();

	// 함수 오버로딩
	
	ArithMatic Expression;
	Expression.Sum(50);
	Expression.Sum(50.123f);
	//Expression.Sum();

	//함수 오버라이딩
	Moto.Print();




	//생성자가 명시적으로 선언
	
	// 자식 클래스 선언 할때 명시적 선언
	
	cout << "---------------------" << "\n";
	Auto Mobile;
	Auto Mobile2(8, 20000000);

	cout << "---------------------" << "\n";
	/*ArrayClass();
	StringClass();*/
	Vector();

	cout << "---------------------" << "\n";

	VirtualParent* Parent = new VirtualParent;
	VirtualChild* Child =  new VirtualChild;
	Parent->PrintClass();
	Child ->PrintClass(); //Overriding 작동

	Parent = Child;

	Parent->PrintClass();
	
	cout << "---------------------" << "\n";

	VirtualParent2* Parent2 = new VirtualParent2;
	VirtualChild2* Child2 = new VirtualChild2;
	Parent2->PrintClass();
	Child2->PrintClass(); //Overriding 작동

	Parent2 = Child2;

	Parent2->PrintClass();

	cout << "---------------------" << "\n";

	/*PureVirtualParent PureParent;*/ //=> 추상클래스는 단독으로 객체 생성 할수 없다.
	
	// 추상클래스를 상속받는 자식 클래스는 순수 가상함수를 재정의해야한다.
	PureVirtualChild PureChild;
	PureChild.PrintClass();

	cout << "---------------------" << "\n";
	
	cout << SumNumber(3, 2) << "\n";
	cout << SumNumber(3.231f, 5.645f) << "\n";

	cout << SumType(10, 20) << "\n";
	cout << SumType(20.56f, 30.63f) << "\n";

	Dice(5,2,4,1);

	


	
}
