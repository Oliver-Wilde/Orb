#pragma once

#include "Core.h"


namespace Orb {

	class ORB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	//To be defined within the client.
	Application* CreateApplication();
}
