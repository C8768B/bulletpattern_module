/* bullet.h */

#ifndef BULLET_MODULE_H
#define BULLET_MODULE_H

#include "bullet_manager.h"

#include "core/object/class_db.h"
#include "scene/2d/sprite_2d.h"
#include "scene/main/node.h"

class Bullet : public Sprite2D {
	GDCLASS(Bullet, Sprite2D);

public:
	enum BulletType
	{
		BULLET_BASIC,
	};

	Bullet();
	~Bullet();

private:
	BulletManager::BulletProperties properties;

protected:
	void _notification(int p_notification);
	static void _bind_methods();
};

VARIANT_ENUM_CAST(Bullet::BulletType);

#endif
