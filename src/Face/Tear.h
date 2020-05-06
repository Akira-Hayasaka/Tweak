#pragma once

#include "ofMain.h"
#include "Globals.h"

class Tear
{
public:

	Tear(shared_ptr<Globals::Mode> _mode) : mode(_mode)
	{

	}

	void dump()
	{
		Globals::dump_mode("Tear", mode);
	}

private:

	shared_ptr<Globals::Mode> mode;
};