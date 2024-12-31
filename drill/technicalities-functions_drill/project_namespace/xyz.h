#include <iostream>
using std::cout;
using std::endl;

/**
 * X: print var
 *
 */
namespace X {
	int var {0};

	void print() {
		cout << var << endl;
	}
}

/**
 * Y: print var
 *
 */
namespace Y {
	int var {0};

	void print() {
		cout << var << endl;
	}
}

/**
 * Z: print var
 *
 */
namespace Z {
	int var {0};

	void print() {
		cout << var << endl;
	}
}
