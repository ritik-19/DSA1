#include<iostream>
using namespace std;
class animal{
pivate:
	string name;
	int age;
	void eat(){
		cout<<"eating\n";
	}
};
class dog : public animal{
        public:
        	void getage(){
        		cout<<age;
        	}
  };
int main(){
dog d1;
// cout<<d1.age;
d1.getage();


return 0;
}
