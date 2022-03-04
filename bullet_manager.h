/* bullet_manager.h */

#ifndef BULLET_MANAGER_H
#define BULLET_MANAGER_H

// Unsure why class_db.h is needed for object.h to work
#include "core/object/class_db.h"
#include "core/object/object.h"

class BulletManager : public Object {
	GDCLASS(BulletManager, Object);
};

#endif
