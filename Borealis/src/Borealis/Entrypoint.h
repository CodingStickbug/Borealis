#pragma once
#include "Core.h"
#include <stdio.h>

#ifdef BS_PLATFORM_WINDOWS

extern Borealis::Application* Borealis::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello world, and welcome to Project Borealis.\n");
	Borealis::Log::init();
	BS_CORE_WARN("Initialized Log");
	BS_CORE_INFO("Hello");

	auto app = Borealis::CreateApplication();
	app->Run();
	delete app;
}
#endif

