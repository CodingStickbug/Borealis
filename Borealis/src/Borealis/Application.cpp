#include "Application.h"

#include "../Borealis/Events/ApplicationEvent.h"
#include "../Borealis/Log.h"

namespace Borealis {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			BS_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			BS_TRACE(e);
		}

		while (true);
	}
}