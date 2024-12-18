#pragma once

#include "Core.h"

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

