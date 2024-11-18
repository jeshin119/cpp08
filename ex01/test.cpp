/*Input Iterator와 다른 반복자의 차이점

종류						특징									사용 예
Input Iterator			데이터를 읽기만 가능하며, 한 번만 읽을 수 있음.		std::istream_iterator
Output Iterator			데이터를 쓰기만 가능하며, 한 번만 쓸 수 있음.		std::ostream_iterator
Forward Iterator		읽기/쓰기 가능하며, 여러 번 읽을 수 있음.			std::forward_list
Bidirectional Iterator	읽기/쓰기 가능하며, 앞뒤로 이동 가능.				std::list, std::set
Random Access Iterator	읽기/쓰기 가능하며, 임의의 위치로 접근 가능.		std::vector, std::deque, std::array
*/