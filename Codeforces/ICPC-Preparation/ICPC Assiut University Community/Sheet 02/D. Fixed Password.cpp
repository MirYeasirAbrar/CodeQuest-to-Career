#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> temp_storage;
    int value;
    
    while (cin >> value) {
        temp_storage.push_back(value);
    }
    
    int count = temp_storage.size();
    int* numbers = new int[count];
    
    for (int i = 0; i < count; i++) {
        numbers[i] = temp_storage[i];
    }
    
    for (int i=0; i<=count; i++){
        if(numbers[i] != 1999){
            cout << "Wrong" << endl;

        }
        else{
            cout << "Correct" << endl;
            break;
        }
    }
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 10000;
//     vector<int> numbers(n);
//     // int value;
    
//     // while (cin >> value) {
//     //     numbers.push_back(value);
//     // }

//     for(int i=0; i<=8999; i++){
//         cin >> numbers[i];
//     }
//     numbers.shrink_to_fit();

//     for (int i=1; i<=value; i++){
//         if(numbers[i]==1999){
//             cout << "Correct" << endl;
//             break;
//         }
//         else{
//             cout << "Wrong" << endl;
//         }
//     }
    
//     return 0;
// }


// int main(){
//     int n = 1000;

//     vector <int> a(n);
//     for(int i=0; i<=n; i++){
//         cin >> a[i];
//     }

//     delete[] a;

//     for(int i=1; i<=12; i++){
//         cout << n << " * " << i << " = " << n*i << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>

// int main() {
//     int size = 10000;  // Large initial allocation
//     std::vector<int> arr(size);
    
//     // Read actual number of elements
//     int actual_size = 0;
//     for (int i = 0; i < size; i++) {
//         if (!(std::cin >> arr[i])) {
//             break;  // Break if input fails (e.g., end of file)
//         }
//         actual_size++;
//     }
    
//     // Resize to actual number of elements read
//     arr.resize(actual_size);
    
//     // Release unused memory
//     arr.shrink_to_fit();
    
//     // Now arr has exactly the memory needed for the elements read
//     std::cout << "Vector size: " << arr.size() << std::endl;
//     std::cout << "Vector capacity: " << arr.capacity() << std::endl;
    
//     return 0;
// }