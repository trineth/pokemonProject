class FieldObject
{
public:
    int position[2];
    int spriteLoc;
    int visible;

    FieldObject()
    {
    }

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

    FieldObject()
    {
    }
};


class NPC : public NPObject
{
protected:
public:
    NPC()
    {
    }

    void update()
};


class Trainer : public NPObject
{
public:
    int pokemonCount;
    int pokemon;
    bool defeated = false;

    Trainer()
    {
    }
};


class Structure : public NPObject
{
public:
    
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