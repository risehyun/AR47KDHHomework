// 002_Complie.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


// include => 그 파일을 사용하겠다고 선언하는 것
// 즉, 선택한 파일의 코드 내용을 그대로 이 파일에 복사붙여넣기 하겠단 것과 같은 의미이다.

#include <iostream>
/*
<= 순수하게 글을 써놓는 것이고, 이것을 주석이라고 한다.
이걸 주석이라고 하고 전처리문의 일종.

이 아래의 내용이 뭔가 의미가 있다고 치면
이걸 만들어내는 과정을 컴파일이라고 합니다.
전처리기 => 컴파일러 => 어셈블러 => 링커 => .exe라는 과정을 거칩니다.

전처리기가 하는 일부터 알아보자.
전처리기는 전처리문이라고 하는 것을 처리하는 단계입니다.

전처리기가 하는 일
1. 주석삭제 <= 주석은 기본적으로 프로그램에 아무 쓸모가 없으므로 지워야한다.
지워서 컴파일하는데 방해가 되지 않도록 한다.


*/
/*
전처리문에는 종류가 많다.
# <= 이게 붙어있으면 웬만하면 전처리 문이다.

*/

int main()
{
    std::cout << "Hello World!\n";
}
