#include<iostream>
#include<fstream>
using namespace std;

class test{
	public:
	void writedata();
	void readdata();
};
void test::writedata(){
	fstream fp;
	char ch;
	fp.open("swanand.txt",ios::out);
	cin>>ch;
	while(ch!='.')
	{
		fp.put(ch);
		cin>>ch;
	}
	fp.close();
}
void test::readdata()
{
	fstream fp;
	char ch;
	fp.open("swanand.txt",ios::in);
	ch=fp.get();
	while(!fp.eof()){
		cout<<ch;
		ch=fp.get();
	}
	fp.close();
}
int main()
{
	test obj;
	int ch;
	do{
	cout<<"\n1.Write\n2.Read\n";
	cin>>ch;
	switch(ch){
		case 1:obj.writedata();
		       break;
		case 2:obj.readdata();
		       break;
	}
}while(ch<3);
}
