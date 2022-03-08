/* bullet_manager.h */

#ifndef BULLET_MANAGER_H
#define BULLET_MANAGER_H

// Unsure why class_db.h is needed for object.h to work
#include "core/object/class_db.h"
#include "core/object/object.h"
//#include "core/variant/variant.h"
#include "core/variant/array.h"

class BulletManager : public Object {
	GDCLASS(BulletManager, Object);

public:
	void clear_bullets();

	struct BulletProperties {
		int speed = 0;
		int acceleration = 0;
		double acceleration_time = 0;
		int angle = 0;
	};

	BulletManager();
	static BulletManager* get_singleton();
	~BulletManager();

private:
	Array bullets;
	BulletProperties bullet_properties;

protected:
	static void _bind_methods();
	static BulletManager *singleton;

	// Getters and setters
public:
	void set_speed(int p_speed, double p_accel_time = 0);
	int get_speed() const;

	void set_angle(int p_angle);
	int get_angle();

};

#endif
