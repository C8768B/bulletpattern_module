/* register_types.cpp */

#include "core/config/engine.h"
#include "core/object/class_db.h"

#include "register_types.h"
#include "bullet.h"
#include "bullet_pattern.h"
#include "bullet_manager.h"

BulletManager* bm = nullptr;

void register_bulletpattern_module_types() {
	ClassDB::register_class<Bullet>();
	ClassDB::register_class<BulletPattern>();
	GDREGISTER_CLASS(BulletManager);

	bm = memnew(BulletManager);
	Engine::get_singleton()->add_singleton(Engine::Singleton("BulletManager", BulletManager::get_singleton(), "BulletManager"));
}

void register_bulletpattern_module_singletons() {
	
}

void unregister_bulletpattern_module_types() {
	memdelete(bm);
}
