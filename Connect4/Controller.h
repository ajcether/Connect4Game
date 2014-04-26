#pragma once

#ifdef EXPORT_TEST_FUNCTIONS

#define CONTROLLER_EXPORT __declspec(dllexport)
#else
#define CONTROLLER_EXPORT __declspec(dllimport)
#endif

class Controller {

public:
	CONTROLLER_EXPORT Controller();
	CONTROLLER_EXPORT ~Controller();
	CONTROLLER_EXPORT int CheckRight();
};

