#pragma once

#include "ofMain.h"
#include "Globals.h"
#include "Eye.h"

class Face
{
public:

	Face()
	{
		mode = make_shared<Globals::Mode>();
		*mode = Globals::Mode::happy;
		eye = make_unique<Eye>(mode);
	}

	void randomize()
	{
		vector<int> rdm = { 0, 1, 2 };
		ofRandomize(rdm);
		if (rdm.front() == 0)
			*mode = Globals::Mode::cry;
		else if (rdm.front() == 1)
			*mode = Globals::Mode::happy;
		else
			*mode = Globals::Mode::sad;
	}

	void dump()
	{
		Globals::dump_mode("Face", mode);
		eye->dump();
	}

public:

	shared_ptr<Globals::Mode> mode;
	unique_ptr<Eye> eye;
};