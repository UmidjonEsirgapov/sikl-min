#include <iostream>
using namespace std;
int calc(int arr[]){
//    int l = arr.length;
    int min = arr[0];
	for(int i = 0; i < 5; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main(){
	int son[5];
	for (int i = 0; i < 5; i++){
		cin >>  son[i];
	}
	
    cout << calc(son);
}