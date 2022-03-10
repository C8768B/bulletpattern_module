/* bullet.cpp */

#include "bullet.h"

#include "main/main.h"
#include "scene/main/window.h"
#include "editor/editor_node.h"
#include "core/math/vector2.h"

void Bullet::_notification(int p_notification) {
	switch (p_notification)
	{
		case NOTIFICATION_READY: {
			if (!get_tree()->get_root()->get_child(0)->is_class("EditorNode")) {
				set_process(true);
			} else {
				set_process(false);
			}
		} break;
		case NOTIFICATION_PROCESS: {
			Vector2 velocity(1, 0);
			velocity = properties.speed * velocity * get_process_delta_time();
			set_position(get_position() + velocity.round());
			
		} break;
		case NOTIFICATION_EXIT_TREE: {
			set_process(false);
		}
	}
}

void Bullet::remove_bullet() {

}

void Bullet::_bind_methods() {
	BIND_ENUM_CONSTANT(BULLET_BASIC);
}

Bullet::Bullet() {
	visibility_notifier = memnew(VisibleOnScreenNotifier2D);
	add_child(visibility_notifier);
	properties.speed = 50;
}

Bullet::~Bullet() {
	
}
