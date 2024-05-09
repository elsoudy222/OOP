//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//    /// 1- Count Positive & Even Numbers Only:-
//    int result = 0;
//    int nums[] = {10, 20, -20, 30, 13, -30, 40};
//    int numSize = size(nums);
//    for (int i = 0; i < numSize; i++) {
//        if (nums[i] > 0 && nums[i] % 2 == 0) {
//            result += nums[i];
//        }
//    }
//    cout << "The Result is : " << result <<endl;
//    cout << "================================================================\n";
//    cout << "================================================================\n";
//
//    ///2- Guess The Correct Number :-
//    int correctNumber = 7;
//    int numberOfTries = 0;
//    int userInput ;
//    cout << "Please Guess The Number Between 1 & 10 : \n";
//
//    while (true){
//        cin>> userInput;
//        if (userInput == correctNumber){
//            cout<<"Great, Your Answer Is Correct. \n";
//            cout<<"============= End Game =============. \n";
//            break;
//        } else{
//            cout<<"Sorry Wrong Answer, Try Again. \n";
//            numberOfTries++;
//        }
//        if (numberOfTries == 3){
//            cout << "=====================================\n";
//            cout << "====== The Correct Answer is 7=======\n";
//            cout<<"============= Game Over =============. \n";
//            cout << "=====================================\n";
//
//        }
//    }
//    cout << "================================================================\n";
//    cout << "================================================================\n";
//    ///2- Reversed Elements From User :-
//
//    int arrayValues[5];
//    int input;
//    cout<<"Please Enter 5 Numbers\n";
//    for (int i = 4; i >=0; i--) {
//        cin>>input;
//        arrayValues[i] = input;
//
//    }
//    cout << "===========================\n";
//    for (int i = 0; i <5; i++) {
//
//        cout<< arrayValues[i]<<endl;
//
//    }
//
//
//    return 0;
//};
