#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Borealis {

	class BOREALIS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be Defined in Client
	Application* CreateApplication();

}

