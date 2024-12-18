#pragma once
#include <stdio.h>

#ifdef BS_PLATFORM_WINDOWS

extern Borealis::Application* Borealis::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello world, and welcome to Project Borealis.\n");
	auto app = Borealis::CreateApplication();
	app->Run();
	delete app;
}
#endif

