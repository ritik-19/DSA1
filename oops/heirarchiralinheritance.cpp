#include<iostream>
using namespace std;
class father{
public:
	int money;
};
class brother :public father{
public:
	int age;
};
class sister : public father{
public:
	int weight;
};
int main(){
sister s;
cout<<s.money<<" "<<s.weight<<"\n";
brother b;
cout<<b.money<<" "<<b.age<<"\n";
father f;
cout<<f.money;
return 0;
}
