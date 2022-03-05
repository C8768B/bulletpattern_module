/* bullet.h */

#ifndef BULLET_MODULE_H
#define BULLET_MODULE_H

#include "scene/main/node.h"

class Bullet : public Node {
    GDCLASS(Bullet, Node);

private:
	int speed;
	int initial_speed;
	double acceleration;
	double acceleration_time;

protected:
	static void _bind_methods();

	
};

#endif
