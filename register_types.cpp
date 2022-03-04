/* register_types.cpp */

#include "core/object/class_db.h"

#include "register_types.h"
#include "bullet.h"
#include "bullet_pattern.h"
#include "bullet_manager.h"

void register_bulletpattern_module_types() {
	ClassDB::register_class<Bullet>();
	ClassDB::register_class<BulletPattern>();
	GDREGISTER_CLASS(BulletManager);
}

void unregister_bulletpattern_module_types() {
	// Nothing to do here
}
