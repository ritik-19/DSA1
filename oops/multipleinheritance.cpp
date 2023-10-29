#include<iostream>
using namespace std;
class father{
public:
	int money;
};
class mother{
public:
	int age;
};
class child : public father, public mother{
public:
	int weight;
};
int main(){
child a;
cout<<a.money<<" "<<a.age<<" "<<a.weight<<"\n";
mother m;
cout<<m.age<<endl;
father f;
cout<<f.money;
return 0;
}
