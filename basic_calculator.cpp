#include <iostream>
using namespace std;

int main()
{
	int num1 ;
	int num2 ;
	char operation ;
	cout<<"Enter First Number : " ;
	cin>>num1 ;
	cout<<"Enter Second Number : " ;
	cin>>num2 ;
	cout<<"Enter operation (e.g. '+','-','*','/','%', to carry on these operands : ";
	cin>>operation ;
	switch(operation)
	{
	case '+':
	{
		cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
		break ;
	}


	case '-':
	{
		cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
		break ;
	}

	case '*':
	{
		cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
		break ;
	}


	case '/':
	{
		cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
		break ;
	}

	case '%':
	{
		cout<<num1<<" % "<<num2<<" = "<<num1%num2<<endl;
		break ;
	}

	default : {
		cout<<"Enter a valid operation :"<<endl<<"Thank You."<<endl;
		break ;
	}
	}
	return 0;
}
