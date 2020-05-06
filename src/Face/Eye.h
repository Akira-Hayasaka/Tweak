#pragma once

#include "ofMain.h"
#include "Globals.h"
#include "Tear.h"

class Eye
{
public:

	Eye(shared_ptr<Globals::Mode> _mode) : mode(_mode)
	{
		tear = make_unique<Tear>(mode);
	}

	void dump()
	{
		Globals::dump_mode("Eye", mode);
		tear->dump();
	}

private:

	shared_ptr<Globals::Mode> mode;
	unique_ptr<Tear> tear;
};