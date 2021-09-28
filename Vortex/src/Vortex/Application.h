#pragma once

#include "Core.h"

namespace Vortex {

	class VORTEX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//TO be defined in a CLIENT
	Application* CreateApplication();
}