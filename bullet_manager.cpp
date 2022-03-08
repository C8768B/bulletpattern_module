/* bullet_manager.cpp */

#include "bullet_manager.h"

BulletManager* BulletManager::singleton;

void BulletManager::clear_bullets() {
	print_line("Cleared bullets");
}

void BulletManager::_bind_methods() {
	ClassDB::bind_method(D_METHOD("clear_bullets"), &BulletManager::clear_bullets);
}

BulletManager *BulletManager::get_singleton() {
	return singleton;
}

// Getters and setters
void BulletManager::set_speed(int p_speed, double p_accel_time) {
	bullet_properties.speed = p_speed;

}

int BulletManager::get_speed() const {
	return bullet_properties.speed;
}

BulletManager::BulletManager() {
	singleton = this;
}

BulletManager::~BulletManager() {
	singleton = nullptr;
}
