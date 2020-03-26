#include <iostream>
using namespace std;

main(){
	int x=1;
	int z=0;
	while (x<41){
		if (x%2==1){
			z=z+x;
			
		}
	x++;
	}
	cout << "even number : " << z << endl;
	return 0;
}
