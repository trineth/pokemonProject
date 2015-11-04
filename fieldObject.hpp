#ifndef FIELDOBJECT_HPP
#define FIELDOBJECT_HPP
 
class FieldObject
{
public:
    int position[2];
    int spriteLoc;
    int visible;

    FieldObject();
    virtual void update();
};


class Player : public FieldOjbect
{
public:

};


class NPObject : public FieldObject
{
public:
    int moveType;
    int triggerType;
    int dialogue;

    NPObject();
};


class NPC : public NPObject
{
public:
    NPC();
    void update();
};


class Trainer : public NPObject
{
public:
    Trainer();
};


class Structure : public NPObject
{
};


class Exit : public NPObject
{
};


class FieldItem : public NPObject
{
};


class GroundType : public NPObject
{
};

#endif