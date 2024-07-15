#include <Orb.h>

class Sandbox : public Orb::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Orb::Application* Orb::CreateApplication()
{
	return new Sandbox();
}