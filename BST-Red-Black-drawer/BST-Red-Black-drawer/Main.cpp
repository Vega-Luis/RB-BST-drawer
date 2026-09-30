#include "Graph.h"
#include "Simple_window.h"
#include "RB_Tree.h"

int main()
{
	using namespace Graph_lib;

	Point tl(150, 150);
	Simple_window win(tl, 600, 400, "My window");
	win.wait_for_button();

	link p = nullptr;
	RBinsert(p, 6);
	RBinsert(p, 9);
	RBinsert(p, 2);
	RBinsert(p, 5);
	RBinsert(p, 3);
	RBinsert(p, 11);
	RBinsert(p, 6);
	RBinsert(p, 7);
	RBinsert(p, 1);
	RBinsert(p, 4);
	RBinsert(p, 12);
	RBinsert(p, 10);
	cout << p;
}