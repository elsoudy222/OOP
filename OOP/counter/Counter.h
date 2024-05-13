//
// Created by Soudy Jr on 13/05/2024.
//

#ifndef C___COUNTER_H
#define C___COUNTER_H


class Counter {
private:
    unsigned int count;

public:

    Counter(): count(0){};
    Counter(int c): count(c){};
    int get_count(){
        return  count;
    }

    Counter operator ++ (){
        ++count;
        return  Counter(count);
    }
    Counter operator -- (){
        --count;
        return  Counter(count);
    }
};


#endif //C___COUNTER_H
