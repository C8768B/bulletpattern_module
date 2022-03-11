/* register_types.cpp */

#include "core/config/engine.h"
#include "core/object/class_db.h"

#include "register_types.h"
#include "bullet.h"
#include "bullet_pattern.h"
#include "bullet_manager.h"

BulletManager* bm = nullptr;

void register_bulletpattern_module_types() {
	GDREGISTER_CLASS(BulletManager);
	bm = memnew(BulletManager);
	Engine::get_singleton()->add_singleton(Engine::Singleton("BulletManager", BulletManager::get_singleton(), "BulletManager"));

	GDREGISTER_CLASS(Bullet);
	GDREGISTER_CLASS(BulletPattern);
	
}

void unregister_bulletpattern_module_types() {
	memdelete(bm);
}
