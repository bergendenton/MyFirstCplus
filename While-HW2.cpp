#include <iostream>
using namespace std;

main(){
	int x=1;
	int z=0;
	while (x<41){
		if (x%2==0){
			z++;
			cout << "even number : " << z << "-" << x << endl;
		}
	x++;
	
	}

  return 0;
}