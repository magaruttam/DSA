#include<iostream>
#include<climits>

using namespace std;

int main(){
	int nums[]= {3,2,6,23,-65,2};
		int smallest = INT_MAX;
		int largest = INT_MIN;
      cout<<"size:"<<sizeof(nums[0]);
		for (int i=0;i<sizeof(nums)/sizeof(nums[0]);i++){
               smallest = min(nums[i],smallest);
			   largest = max(nums[i],largest);
		}
   cout<< "Smalles number in array="<<smallest<<endl;
   cout<< "Smalles number in array="<<largest;
	return 0;
}
