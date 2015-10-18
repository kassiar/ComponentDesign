#pragma once

#ifndef SRC_FIRSTCOMPONENT_FIRSTCOMPONENTBASE_H
#define SRC_FIRSTCOMPONENT_FIRSTCOMPONENTBASE_H


namespace CompDesign {

class FirstComponentBase {
public:
    virtual int doStuff() = 0;

    FirstComponentBase();
    ~FirstComponentBase();
};

}


#endif // SRC_FIRSTCOMPONENT_FIRSTCOMPONENTBASE_H
