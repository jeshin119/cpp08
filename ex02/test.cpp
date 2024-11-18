/*종류						특징									사용 예
Input Iterator			데이터를 읽기만 가능하며, 한 번만 읽을 수 있음.		std::istream_iterator
Output Iterator			데이터를 쓰기만 가능하며, 한 번만 쓸 수 있음.		std::ostream_iterator
Forward Iterator		읽기/쓰기 가능하며, 여러 번 읽을 수 있음.			std::forward_list
Bidirectional Iterator	읽기/쓰기 가능하며, 앞뒤로 이동 가능.				std::list, std::set
Random Access Iterator	읽기/쓰기 가능하며, 임의의 위치로 접근 가능.		std::vector, std::deque, std::array
*/
#include <stack>
#include <string>
#include <iostream>
using namespace std;
int main(){
	{
		//const 컨테이너는 수정불가
		// const stack<string> st;
		// st.push("hi");
	}
	{
		//stack은 깊은복사 지원?
		stack<int> origin_stack;
		origin_stack.push(10);
		origin_stack.push(20);
		origin_stack.push(30);

		// 복사 생성자를 사용하여 origin_stack을 복사
		stack<int> new_stack = origin_stack;

		// new_stack과 origin_stack은 독립적으로 동작
		new_stack.pop(); // new_stack에서 30 제거
		cout << "Top of new_stack: " << new_stack.top() << endl; // 출력: 20
		cout << "Top of origin_stack: " << origin_stack.top() << endl; // 출력: 30
	}
}