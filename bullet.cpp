/* bullet.cpp */

#include "bullet.h"

#include "main/main.h"
#include "scene/main/window.h"
#include "editor/editor_node.h"
#include "core/math/vector2i.h"

void Bullet::_notification(int p_notification) {
	switch (p_notification)
	{
		case NOTIFICATION_READY: {
			if (!get_tree()->get_root()->get_child(0)->is_class("EditorNode")) {
				set_process(true);
			} else {
				set_process(false);
			}
			print_line(get_tree()->get_root()->get_child(0));
			
		} break;
		case NOTIFICATION_PROCESS: {
			Vector2i velocity(1, 0);
			velocity = properties.speed * velocity;
			set_position(get_position() + (velocity * get_process_delta_time()));
			print_line(velocity, " ", get_position());
		} break;
		case NOTIFICATION_EXIT_TREE: {
			set_process(false);
		}
	}
}

void Bullet::_bind_methods() {
	BIND_ENUM_CONSTANT(BULLET_BASIC);
}

Bullet::Bullet() {
	properties.speed = 50;
}

Bullet::~Bullet() {
	// Process will not stop unless unset.
	//set_process(false);
}
