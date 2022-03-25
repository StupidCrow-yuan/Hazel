#include "Application.h"
#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Hazel {
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
			Hazel_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput))
		{
			Hazel_TRACE(e);
		}
		
		while (true)
		{
			//std::cout << "hazel engine" << std::endl;
		};
	}
}