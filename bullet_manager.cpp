/* bullet_manager.cpp */

#include "bullet_manager.h"

void BulletManager::clear_bullets() {
	// TODO: make function do stuff
}

void BulletManager::_bind_methods() {
	ClassDB::bind_method(D_METHOD("clear_bullets"), &BulletManager::clear_bullets);
}

BulletManager::BulletManager() {

}

BulletManager::~BulletManager() {

}
