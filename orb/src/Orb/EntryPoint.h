#pragma once

#ifdef ORB_PLATFORM_WINDOWS

extern Orb::Application* Orb::CreateApplication();


int main(int argc, char** argv) 
{

	
	auto app = Orb::CreateApplication();
	app->Run();
	delete app;
}

#endif