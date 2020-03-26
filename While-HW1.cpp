#include <iostream>
using namespace std;

main(){
	int x=1,z=0;
	while (x<41){
		if (x%2==1){
			
			z=z+1;
		}
	x++;
	}
	cout << "number of odd-numbers between 1-40 : " << z << endl;
	return 0;
}
