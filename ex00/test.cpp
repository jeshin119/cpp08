#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
#include <map>
using namespace std;

int main(){
	{
		vector<string> v;
		v.push_back("mon");
		v.push_back("tue");
		v.push_back("wed");
		v.push_back("thu");

		std::vector<string>::iterator it = std::find(v.begin(), v.end(), "mon");
		cout<<*it<<"\n"; //mon
		*it = "sat";
		cout<<*v.begin()<<"\n"; //sat
		if (v.begin() == it){
			cout<< "begin == it\n";
		}
	}
	{
		map<string, int> m;
		m["mon"]=1;
		m["tue"]=2;
		m["wed"]=3;
		m["thu"]=4;

		//불가 std::find 대신 map::find을 사용해야함. std::find는 seqeunce container에만 적용가능
		// std::map<string,int>::iterator it = std::find(m.begin(), m.end(), "wed");
		std::map<string,int>::iterator it = m.find("mon");
		cout<<"it->first: "<<it->first<<" ";
		cout<<"it->second: "<<it->second<<"\n";
	}
}