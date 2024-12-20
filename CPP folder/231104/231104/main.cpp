#include <iostream>
using namespace std;

#pragma region 복습
// 클래스 상속 특징
// 1. 자식 클래스의 생성자, 소멸자가 호출될 때
// 부모 클래스의 생성자, 소멸자도 호출된다.
// 생성자 : 부모 -> 자식
// 소멸자 : 자식 -> 부모
// 
// 2. 자식 클래스는 부모 클래스의 메서드를 재정의할 수 있다.
// 메서드 재정의 : 부모에게 물려받은 메서드의 내용을 다시 작성한다.
// 
// 3. 자식 클래스는 부모 클래스처럼 취급할 수 있다.
// 단, 자식 클래스를 부모 클래스처럼 취급할 경우,
// 부모 클래스에 있는 데이터와 기능만 사용할 수 있음!
// 
// 가상 메서드
// 가상 메서드를 재정의하면, 항상 재정의한 메서드를 호출!
// virtual [메서드];
// 
// 추상 메서드
// 내용이 없는 가상 메서드.
// // virtual [메서드] = 0;
// 자식 클래스에서 '반드시' 재정의 해야한다!
// 
// 추상 클래스
// 추상 메서드를 1개 이상 가지고 있는 클래스
// 추상 클래스는 완성된 클래스가 아니므로, 객체를 생성할 수 없음.
// 
// 텍스트 rpg 만들기
// 
//

int main()
{


	return 0;
}