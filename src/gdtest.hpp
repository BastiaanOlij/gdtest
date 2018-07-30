#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Node2D.hpp>

namespace godot {

class GDTest : public Node2D {
	GODOT_CLASS(GDTest, Node2D)

private:
	String _data;

public:
	static void _register_methods();

	void _init();

	void set_data(String new_data);
	String get_data() const;

	String a_method();
};

}

#endif /* !GDTEST_HPP */
