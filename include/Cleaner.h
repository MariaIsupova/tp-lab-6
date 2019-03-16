#ifndef CLEANER_H
#define CLEANER_H


#include "Personal.h"

const int NUMBER_OF_CLEANER = 4;

class CleanerCreator;

class Cleaner : public Personal{
    friend CleanerCreator;
protected:
    float worktime;
    Cleaner(int _id, std::string _name, float _payment, float _worktime) :
        Personal(_id, _name, _payment),
        worktime(_worktime){}
    Cleaner(){}
public:

    ~Cleaner();

    void print() const;



};



#endif // CLEANER_H
