#ifndef WO_PORTAL_INCLUDED
#define WO_PORTAL_INCLUDED

#include "WorldObject.h"
class WO_Portal : public WorldObject
{
private:
	bool exists;

public:
	//CONSTRUCTORS AND DESTRUCTORS
	WO_Portal();
	WO_Portal(Coord2D indices);
	~WO_Portal();

	//SETTERS
	void setExists(bool b);

	//GETTERS
	bool doesExist();

	//VIRTUAL
	int getType();
	void draw(Camera* cam, GLuint shaderProgram);

	//OTHERS
	void moveTo(Vec3D pos);
};
#endif