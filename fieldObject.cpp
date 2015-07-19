

class FieldObject
{
public:
	int position[2];

	FieldObject(int x, int y) {
		position = [x, y]
	}

	virtual void update();
};


class NPC : public FieldObject
{
public:

	NPC(int x, int y): FieldObject(x, y)
	{
	}

	void update()
};


class Trainer : public NPC
{

};


class ImmoveableObject : public FieldObject
{

};


class MoveableObject : public FieldObject
{

};


class Player : public FieldObject
{

};