
#include <iostream>

/*

F5 : 중단점이 존재하는 데까지 한번에 실행하라. 없다면 끝까지 실행
F10 : 처리형태가 구분되는 한 명령씩 실행하라.
F5+Shift : 디버깅 즉시 중지
Alt + 방향키 : 방향키 방향으로 코드 이동
shift + home : 변수 이름 선택
shift + pg up : 스크롤 위로 이동


*/


int main()
{
	int Left = 3;
	int Right = 7;

	int Result = 0;

	// 연산자에는 단항 연산자와 이항 연산자, 삼항 연산자가 있다.

	// 단항 연산자 : 메모리 영역이 1개만 필요하면 단항
	// 이항 연산자 : " 2개 필요하면 이항
	// 삼항 연산자 : " 3개 필요하면 삼항


	// (대부분의)사칙 연산(산술 연산), 대입 연산 => 이항 연산

	Result = Left + Right;

	// c++에서 정수의 나눗셈은 몫만 나온다.
	// % -> 나머지 연산자.



	// 단항 연산
	// Result = -Left;


	// 증감 연산자 : --(전치, 후치 == 전위, 후위), ++



	// 연산자 우선순위
	// 괄호 연산자 () <- 연산 우선 순위를 높임




	// 비교 / 관계 연산자

	// bool이라는 자료형에 대해 알아보자.
	// bool 자료형은 논리형이라고 부른다.
	// 논리형은 true(1)와 false(0)로 참과 거짓으로만 표현할 수 있는 자료형을 논리형이라고 한다.

	bool bResult = true;		// (1)
	bResult = false;			// (0)

	bResult = Left == Right;	// (거짓)
	bResult = Left != Right;	// (참)

	// 논리 연산자

	bResult = Left && Right;    // (AND 연산자)
	bResult = Left || Right;	// (OR 연산자)


	
}
