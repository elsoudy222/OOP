//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
///*
//void calculator(int num1, int num2, string operation) {
//    if (operation == "+") {
//        cout << num1 << " + " << num2 << " = ";
//        cout << num1 + num2;
//    } else if (operation == "-") {
//        cout << num1 << " - " << num2 << " = ";
//        cout << num1 - num2;
//    } else if (operation == "*") {
//        cout << num1 << " * " << num2 << " = ";
//        cout << num1 * num2;
//    } else if (operation == "/") {
//        cout << num1 << " / " << num2 << " = ";
//        cout << num1 / num2;
//    } else if (operation == "%") {
//        cout << num1 << " % " << num2 << " = ";
//        cout << num1 % num2;
//    } else {
//        cout << "Invalid Operation\n";
//    }
//}
//
//void sumOfArray(int nums[], int count) {
//    int result = 0;
//    for (int i = 0; i < count; i++) {
//        result += nums[i];
//    }
//    cout << "Result is : " << result << endl;
//}
//*/
//int main() {
///*    int num1,num2;
//    string op;
//    cout<<"Enter First Number :"; cin>>num1;
//    cout<<"Enter Second Number :"; cin>>num2;
//    cout<<"Enter The Operation :"; cin>>op;
//        calculator(num1,num2,op);
//
//    int arrayOfNums[]={10,20,30,40,50,100};
//    int arraySize = size(arrayOfNums);
//    sumOfArray(arrayOfNums,arraySize);
//*/
//
//    int num = 100;
//    int *ptr = &num;
//
//    cout<< "Value: "<<num<<"\n";
//    cout<< "Address: "<<&num<<"\n";
//    cout<< "Address: "<<ptr<<"\n";
//    cout<< "Value From Pointer: "<<*ptr<<"\n";
//    cout<<"===========================\n";
//    cout<<"===========================\n";
//    *ptr = 50000;
//    cout<< "Value: "<<num<<"\n";
//    cout<< "Address: "<<&num<<"\n";
//    cout<< "Address: "<<ptr<<"\n";
//    cout<< "Value From Pointer: "<<*ptr<<"\n";
//    cout<<"===========================\n";
//    cout<<"===========================\n";
//    cout<<"===========================\n";
//    cout<<"===========================\n";
//    cout<<"===========================\n";
//    vector<int> nums = {10, 20, 30,40,20,20,10,50,100,200,-20,15,20};
//    int val = 20;
//    int countTimes = count(nums.begin(),nums.end(),val);
//    cout<< "The Number "<<val<<" Founded "<<countTimes<<" Times.\n";
////    cout<<"===========================\n";
////    for (int n : nums) {
////        cout<<n<<"\n";
////    }
//    cout<<"===========================\n";
//    sort(nums.begin(),nums.end());
//    for (int n : nums) {
//        cout<<n<<"\n";
//    }
//    cout<<"===========================\n";
//    reverse(nums.begin(),nums.end());
//    for (int n : nums) {
//        cout<<n<<"\n";
//    }
//    cout<<"===========================\n";
//
//    return 0;
//
//
//
//
//
//
//
//
////    vector<int>::iterator it;
////    // Loop With Iterator:
////
////    for ( it = nums.begin(); it < nums.end(); it++) {
////        cout<< *it <<"\n";
////    }
////    cout<<"=====================\n";
////
////    // Ranged Loop with for :
////
////    for (int value:nums) {
////        cout << value <<"\n";
////    }
//}
//
///* Illustration of range-for loop
// using CPP code
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//using namespace std;
// Driver
//int main()
//{
//    // Iterating over whole array
//    vector<int> v = { 0, 1, 2, 3, 4, 5 };
//    for (auto i : v)
//        cout << i << ' ';
//
//    cout << '\n';
//
//    // the initializer may be a braced-init-list
//    for (int n : { 0, 1, 2, 3, 4, 5 })
//        cout << n << ' ';
//
//    cout << '\n';
//
//    // Iterating over array
//    int a[] = { 0, 1, 2, 3, 4, 5 };
//    for (int n : a)
//        cout << n << ' ';
//
//    cout << '\n';
//
//    // Just running a loop for every array
//    // element
//    for (int n : a)
//        cout << "In loop" << ' ';
//
//    cout << '\n';
//
//    // Printing string characters
//    string str = "Geeks";
//    for (char c : str)
//        cout << c << ' ';
//
//    cout << '\n';
//
//    // Printing keys and values of a map
//    map<int, int> MAP({ { 1, 1 }, { 2, 2 }, { 3, 3 } });
//    for (auto i : MAP)
//        cout << '{' << i.first << ", " << i.second << "}\n";
//}
//*/