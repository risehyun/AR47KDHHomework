// 헤더는 반드시 정말로 사용할 것만 include하여 최소한으로 사용한다.
// include 자체가 헤더 파일의 내용을 해당 소스로 그대로 복사붙여넣기 하겠다는 뜻이므로
// 불필요한 코드가 복붙되면 컴파일이 오래걸리게 된다.
// 컴파일 과정에서 문법 체크를 하게 되므로 코드가 길다면 검사하는 시간이 오래걸린다. => 빌드까지 시간이 오래 걸림

#include <iostream>

int main()
{
	int right;
	int left;

	// 연산자? 특정 메모리를 변화시키는 명령을 축약해 놓은 기호

	int playerHp;

	// 이미 만들어져있는 playerHp번째를 100으로 바꾸라는 뜻
	playerHp = 100; 
	// playerHp 메모리에 100을 할당하는 대입 연산자
	// 1. 4바이트의 공간을 할당하고
	// 2. 어딘가에 있을 100을 가져와서 
	// 3. playerHp번째에 있는 값에 복사 붙여넣기하라.

}
