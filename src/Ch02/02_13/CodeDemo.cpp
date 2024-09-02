// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result;
    int sum = 0;
    int i;

    for (i=0; i<sizeof(nums)/sizeof(int); i++){
        sum += nums[i];
    }

    result = (float) sum / (float) (sizeof(nums)/sizeof(int));
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
