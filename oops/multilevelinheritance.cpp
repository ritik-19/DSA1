#include<iostream>
using namespace std;
class fruit{
public:
	int money;
};
class mango : public fruit{
public:
	int age;
};
class alphanso : public mango{
public:
	int weight;
};
int main(){
// alphanso a;
// cout<<a.money<<" "<<a.age<<" "<<a.weight;
// mango m;
// cout<<m.money<<" "<<m.age;
fruit f;
cout<<f.money;
return 0;
}
