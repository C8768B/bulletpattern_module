/* bullet_manager.cpp */

#include "bullet_manager.h"

#include "core/config/project_settings.h"

BulletManager* BulletManager::singleton;

void BulletManager::clear_bullets() {
	print_line("Cleared bullets");
}

void BulletManager::add_bullet(int x, int y, int speed, int angle, String sprite_path) {
	
}

void BulletManager::_bind_methods() {
	ClassDB::bind_method(D_METHOD("clear_bullets"), &BulletManager::clear_bullets);
	ClassDB::bind_method(D_METHOD("add_bullet", "properties"), &BulletManager::add_bullet);
}

BulletManager *BulletManager::get_singleton() {
	return singleton;
}

// Getters and setters
void BulletManager::set_speed(int p_speed, double p_accel_time) {
	//bullet_properties.speed = p_speed;

}

int BulletManager::get_speed() const {
	//return bullet_properties.speed;
	return 0; //temp
}

BulletManager::BulletManager() {
	singleton = this;
	//print_line(sizeof(bullets));

	GLOBAL_DEF("bhm/bullet_pool/use_object_pool", false);
	ProjectSettings::get_singleton()->set_custom_property_info("bhm/bullet_pool/use_object_pool", PropertyInfo(Variant::INT, "bhm/bullet_pool/use_object_pool", PROPERTY_HINT_FLAGS, "Enables object pooling for bullets, Currently does nothing."));
	GLOBAL_DEF("bhm/bullet_pool/pool_size", 512);

	//bullets.resize(GLOBAL_GET("bhm/bullet_pool/pool_size"));
	//print_line(bullets.size(), sizeof(bullets));
}

BulletManager::~BulletManager() {
	singleton = nullptr;
}
