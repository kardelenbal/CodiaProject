#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	
	int i,sayi;
 	int faktoriyel=1;
 	cout<<"sayi:";
 	cin>>sayi;
 	
 	for(i=1;i<=sayi;i++)
 	faktoriyel*=i;
 	cout<<"sanuc:"<<faktoriyel<<"\n";
	
	
	
	return 0;
}
