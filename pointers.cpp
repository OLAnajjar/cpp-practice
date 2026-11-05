/*                Bakery Stock Inspector:
- You are developing a small Bakery Stock Inspector using C++.
- You have an array containing the quantities of 5 different bread types.
- Your task is to use pointers to inspect and modify the stock.
Requirements: 
1. Create an integer array called bread containing: {10, 20, 15, 30, 25}.
2. Create an integer pointer called ptr that points to the first element of bread.
3. Use a loop and pointer arithmetic (ptr++) to display all bread quantities.
4. Move the pointer forward by 2 positions using ptr += 2 and display the value it points to.
5. Use dereferencing (*ptr) to increase that bread quantity by 5.
6. Display the updated array.
7. Create a function called displayBread that receives a pointer and the array size, then displays all elements.*/

// not that cout << *(ptr + i) << " "; => pointer arithmetic instead of array indexing

#include <iostream>

using namespace std;

int main(){
    int bread[] = {10, 20, 15, 30, 25};
    int *ptr = bread;//no need to &bread[0]
    int size = sizeof(bread)/sizeof(bread[0]);
    for(int i = 0; i< size; i++){
        cout << *ptr << " ";
        ptr++;
    }


}