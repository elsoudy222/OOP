#include <iostream>
#include <cmath>
#include "revision/revision.cpp"

using namespace std;

int mango(int quantity, int price)
{

//    return (quantity - quantity/3) * price;
    return ((quantity % 3) * price) + ((quantity/3) * (2 * price));
    //           ( 0        * 3  )    +     ( 3 )        *(2 * 3)
    //                    3           +       3           * 6 => 18
}

int quarter_of(int month){
    if(3<= month >0){
        return 1;
    } else if ( 6 <= month >3){
        return 2;
    } else if(9<= month >6){
        return 3;
    } else{
        return 4;
    }

}

vector<int> invert(vector<int> values  )
{

    for(int i =0; i< values.size(); i++){
        values[i] = values[i] * -1;
    }

    return values;
}

int main() {



    return 0;
}


