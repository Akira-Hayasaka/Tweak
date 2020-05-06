#pragma once

#include "ofMain.h"

namespace Globals
{
	enum struct Mode { sad, cry, happy };

	static void dump_mode(const string _class_name, shared_ptr<Mode> _mode)
	{
		if (*_mode == Mode::sad)
			ofLogNotice(_class_name) << "sad";
		else if (*_mode == Mode::cry)
			ofLogNotice(_class_name) << "cry";
		else if (*_mode == Mode::happy)
			ofLogNotice(_class_name) << "happy";
	}
}